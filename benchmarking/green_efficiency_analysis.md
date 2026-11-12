# Green Efficiency Analysis

## Measurement Methodology

All programs were compiled with `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-long-long` and run on the same machine and environment, an Ubuntu Linux terminal session, with no other heavy programs running. Time was measured with `clock()` and converted to seconds using `CLOCKS_PER_SEC`, so every result is CPU time of the process, not wall-clock time.

The baseline loop (100,000,000 iterations) was run three times: 0.228071, 0.231005 and 0.233268 seconds, an average of 0.230781 seconds. The comparison program was run five times, and the instrumentation lab was run five times. In `instrumentation_lab.c`, I placed one `clock()` pair directly around each phase and an outer pair around all three phases, so TOTAL always encloses the sub-measurements. All `printf` calls were kept outside the timed regions so output speed is not measured.

## Observed Performance Differences

The baseline runs were close but not identical: the gap between the fastest and slowest run was 0.005197 seconds, about 2.3% of the average. Even a deterministic computation therefore shows run-to-run variability.

In the algorithm comparison, the naive implementation (nested loops, O(n^2)) averaged 2.779739 seconds over five runs, with values from 2.765204 to 2.808108 seconds. The single-pass implementation (O(n)) averaged 0.000108 seconds, with values from 0.000105 to 0.000114 seconds. The naive version was therefore about 25,700 times slower. For ARRAY_SIZE = 50000, the naive version performs about 1,250,025,000 inner iterations versus 50,000 for the single pass, a theoretical ratio of about 25,000, close to the measured one. The two results also differ (625025000 vs 25000) because the naive version recounts earlier elements in every outer iteration, so it computes a different count, not only a slower one.

In the instrumentation lab, the average measured times over five runs were TOTAL 0.000773 seconds, BUILD_DATA 0.000315 seconds, PROCESS 0.000319 seconds and REDUCE 0.000135 seconds. PROCESS had the highest average, but its margin over BUILD_DATA (0.000004 seconds) is smaller than the run-to-run variation, so the two phases should be treated as roughly equal. REDUCE was consistently the shortest and the most stable, between 0.000135 and 0.000136 seconds. TOTAL ranged from 0.000731 to 0.000843 seconds, and in every run it was greater than or equal to each sub-measurement, as required. Most of the variation in TOTAL came from BUILD_DATA, which ranged from 0.000261 to 0.000391 seconds.

## Relation Between Runtime and Energy Consumption

A longer runtime means the CPU stays active longer, which generally increases energy consumption. Following this reasoning, the naive algorithm, which ran about 25,700 times longer than the single-pass one, would be expected to keep the CPU busy proportionally longer. However, this project did not measure power in watts. Energy is only inferred from runtime, so I can say the faster implementation likely uses less CPU energy, but I cannot state a specific energy saving.

## Limitations of the Experiment

First, only runtime was measured, not real power draw, so all energy conclusions are indirect. Second, `clock()` has limited resolution, and very short measurements such as the single-pass time of about 0.000108 seconds and the instrumentation phases (all between 0.000135 and 0.000391 seconds per phase, so a single clock tick of difference is a large fraction of each value) cannot be compared reliably. Third, the number of runs was small (three for the baseline, five for the others), so averages could shift with more runs. Fourth, background processes, CPU scheduling and caching likely explain the 2.3% baseline spread, although I did not measure these causes directly. Finally, all measurements come from one machine, so absolute times may not transfer to other hardware.

## Practical Engineering Takeaway

Algorithmic choice had a far larger effect than measurement noise: the O(n^2) versus O(n) difference was about 25,700 times, while the baseline run-to-run variation was about 2.3%. Engineers should fix the algorithm before small tuning, and should measure with repeated runs, fixed conditions and clearly defined timing boundaries before drawing conclusions. When energy matters, runtime is a useful first proxy, but it should be confirmed with proper energy tooling.

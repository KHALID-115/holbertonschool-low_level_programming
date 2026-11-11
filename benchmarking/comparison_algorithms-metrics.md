## Run 1
```
Naive algorithm result: 625025000
Naive algorithm time: 2.808108 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000106 seconds
```

## Run 2
```
Naive algorithm result: 625025000
Naive algorithm time: 2.780414 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000107 seconds
```

## Run 3
```
Naive algorithm result: 625025000
Naive algorithm time: 2.765204 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000109 seconds
```

## Run 4
```
Naive algorithm result: 625025000
Naive algorithm time: 2.773151 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000105 seconds
```

## Run 5
```
Naive algorithm result: 625025000
Naive algorithm time: 2.771818 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000114 seconds
```

## Summary

| Implementation | Average (s) | Min (s) | Max (s) |
|---|---|---|---|
| Naive (O(n^2)) | 2.779739 | 2.765204 | 2.808108 |
| Single-pass (O(n)) | 0.000108 | 0.000105 | 0.000114 |

Averages are computed from the 5 runs above.

**Relative difference:** the naive implementation is ~25,700 times slower than the single-pass implementation (2.779739 / 0.000108).

## Notes

- The naive version performs about n(n+1)/2 = 1,250,025,000 inner iterations for n = 50000, versus 50,000 for the single pass. The theoretical ratio is about 25,000, close to the measured one.
- The results differ (625025000 vs 25000) because the naive version recounts earlier elements in every outer iteration, so it computes a different count, not only a slower one.
- The single-pass time (~0.1 ms) is small, so `clock()` resolution affects its relative variation more than the naive one. Naive spread was about 1.5% of its average.

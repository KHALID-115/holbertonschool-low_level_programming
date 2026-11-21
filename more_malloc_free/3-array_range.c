#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: first value of the array
 * @max: last value of the array
 *
 * Description: the array contains all values from min to max,
 * both included. Returns NULL if min > max or if malloc fails.
 *
 * Return: pointer to the new array, or NULL
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min + i;

	return (arr);
}

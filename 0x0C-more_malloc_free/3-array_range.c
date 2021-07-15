#include <stdlib.h>
#include "holberton.h"

/**
 * array_range - creates an array of integers from min to max
 * @min: minimum range point
 * @max: maximum range point
 *
 * Return: pointer to array of int
 */

int *array_range(int min, int max)
{
	int *arr;
	int len, i;

	if (min > max)
		return (NULL);
	len = (max + 1) - min;
	arr = malloc(len * sizeof(arr));
	if (arr == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
		arr[i] = i;

	return (arr);
}

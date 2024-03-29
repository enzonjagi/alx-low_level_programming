#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - a function that searches for a value in an array of integers
 * @array: pointer to the array
 * @size: number of elements in array
 * @value: what we're looking for
 *
 * Return: -1 or value's index in array
 */

int linear_search(int *array, size_t size, int value)
{
	size_t x;

	if (array == NULL)
		return (-1);
	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%lu] = [%d]\n", x, array[x]);
		if (array[x] == value)
			return (x);
	}
	return (-1);
}

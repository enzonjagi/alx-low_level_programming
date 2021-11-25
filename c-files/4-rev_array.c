#include "holberton.h"

/**
 * reverse_array - reverses the elements of an array
 * @a: pointer to original array
 * @n: number of elements the array pointed to holds
 *
 * Return: a
 */

void reverse_array(int *a, int n)
{
	int temp;
	int i, j;

	/*using a temp to store a value and swap*/
	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		temp = *(a + i);
		*(a + i) = *(a + j);
		*(a + j) = temp;
	}
}

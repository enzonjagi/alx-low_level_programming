#include "holberton.h"
#include <string.h>
#include <stdio.h>

/**
 * print_array - prints each value of an array
 * @a: integer pointer parameter
 * @n: element parameter
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;
	/*int len = strlen(a);*/

	for (i = 0; i < n; i++)
	{
		if (i < n-1)
		{
			printf("%d, ", *(a + i));
		}
		else
		{
			printf("%d", *(a + i));
		}
	}
	printf("\n");
}

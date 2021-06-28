#include "holberton.h"
#include <string.h>

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
		_putchar(*(a + i));
	}
	_putchar('\n');
}

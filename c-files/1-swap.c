#include "holberton.h"

/**
 * swap_int - swaps the values of the parameters given
 * @a: integer received
 * @b: integer received
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

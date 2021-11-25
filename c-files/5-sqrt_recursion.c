#include "holberton.h"

/**
 * sqrt_root - find the natural square root of a number
 * @n: number checked
 * @i: number to find square root with
 *
 * Return: i or -1
 */
int sqrt_root(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i < n)
		return (sqrt_root(n, i + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - find square root of a number
 * @n: the number to find squre root of
 *
 * Return: the sqrt of n
 */

int _sqrt_recursion(int n)
{
	int i = 1;

	return (sqrt_root(n, i));
}

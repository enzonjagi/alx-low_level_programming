#include "holberton.h"
/**
 * check_for_prime - uses recursion to find if a number is prime
 * @n: number being checked
 * @i: numbers to use to chekc this
 *
 * Return: 1, or 0
 */
int check_for_prime(int n, int i)
{
	if (i >= n / 2)
		return (1);
	if (n % i)
		return (check_for_prime(n, i + 2));
	return (0);
}

/**
 * is_prime_number - checks whether an int is prime
 * @n: integer parameter received
 *
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	if (n < 2 || !(n % 2))
		return (0);
	return (check_for_prime(n, 3));
}

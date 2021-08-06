#include <math.h>
#include "main.h"

/**
 * power - finds base ^ exponent
 * @base: the base value
 * @exponent: the exponent value
 * Return: result of the above
 */
int power(int base, int exponent)
{
	int result = 1;

	while (exponent != 0)
	{
		result = result * base;
		--exponent;
	}
	return (result);
}

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: the string received
 * Return: 0 or the expected unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int idx;

	if (b == NULL)
		return (0);
	for (idx = 0; b[idx] != '\0'; idx++)
	{
		if (b[idx] != '0' && b[idx] != '1')
			return (0);
	}
	for (idx = 0; b[idx] != '\0'; idx++)
	{
		dec <<= 1;
		if (b[idx] == '1')
			dec += 1;
	}
	return (dec);
}

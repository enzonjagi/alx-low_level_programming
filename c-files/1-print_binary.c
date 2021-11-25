#include "main.h"

/**
 * power - finds base ^ exp
 * @base: base value
 * @exp: raised to the exponent
 * Return: result
 */
unsigned long int power(unsigned int base, unsigned int exp)
{
	unsigned long int num;
	unsigned int i;

	num = 1;
	for (i = 1; i <= exp; i++)
		num *= base;
	return (num);
}
/**
 * print_binary - prints a decimal in binary
 * @n: the number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int div, check;
	char flag;

	flag = 0;
	div = power(2, sizeof(unsigned long int) * 8 - 1);
	while (div != 0)
	{
		check = n & div;
		if (check == div)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || div == 1)
		{
			_putchar('0');
		}
		div >>= 1;
	}
}

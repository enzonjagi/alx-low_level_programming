#include "holberton.h"

/**
 * print_sign - this function prints sign of a value
 * @n: the integer value it receives
 *
 * description:
 * print_sign()
 * the function receives an int c
 * then checks if it is greater then zero
 * then prints '+' sign and returns(1)
 * else if value is les than zero
 * it prints '-' and returns -1
 * else it prints '0' and returns 0
 * Return: 1, -1, or 0
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
_putchar('0');
return (0);
}

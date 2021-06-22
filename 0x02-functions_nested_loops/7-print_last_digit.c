#include "holberton.h"

/**
 * print_last_digit - this function returns the last digit of an int
 * @c: the integer value it receives
 *
 * description:
 * print_last_digit(int);
 * the function receives an int c
 * checks if it is greater then zero
 * then multiplies the value by 1 to get abs_value
 * else if value is less than zero
 * absolute value = (value * -1)
 * else absolute value is 0
 * Return: 0
 */

int print_last_digit(int c)
{
int last_digit = c % 10;

if (c < 0)
{
  last_digit = last_digit * -1;
}
_putchar(last_digit + '0');
return (last_digit);
}

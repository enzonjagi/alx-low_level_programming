#include "holberton.h"

/**
 * _abs - this function gives the abs value of a number
 * @int: the integer value it receives
 *
 * description:
 * _abs()
 * the function receives an int c
 * checks if it is greater then zero
 * then multiplies the value by 1 to get abs_value
 * else if value is less than zero
 * absolute value = (value * -1)
 * else absolute value is 0
 * Return: 0
 */

int _abs(int c)
{

if (c < 0)
{
return (c * -1);
}
else if (c > 0)
{
return (c - 0);
}
return (0);
}

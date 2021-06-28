#include "holberton.h"

/**
 * _isdigit - checks if character is a digit
 * @c: characater received as parameter
 *
 * description:
 * _isdigit()
 * checks to see if a character is a digit
 * by looping from 0 to 9
 * return 1 if true 0 otherwise
 * Return: 1 or 0
 */

int _isdigit(int c)
{
int i = '0';

for (i = '0'; i <= '9'; i++)
{
if (c == i)
{
return (1);
}
}
return (0);
}

#include "holberton.h"

/**
 * _isupper - checks if character is uppercase
 * @c: characater received as parameter
 *
 * description:
 * is_upper()
 * checks to see if a character is uppercase
 * by looping from A to Z
 * return 1 if true 0 otherwise
 * Return: 1 or 0
 */

int _isupper(int c)
{
int i = 'A';

for (i = 'A'; i <= 'Z'; i++)
{
if (c == i)
{
return (1);
}
}
return (0);
}

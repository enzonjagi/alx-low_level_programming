#include "holberton.h"

/**
 * _isalpha - this function checks if value is an alphabet
 * @c: the integer value it receives
 *
 * description:
 * _isalpha()
 * the function receives a character 'c'
 * then checks if it is an alphabet
 * whether lower or uppercase
 * after which returns 1
 * else it returns 0
 * Return: 1 or 0
 */

int _isalpha(int c)
{
int i = 'a';
int j = 'A';

for (i = 'a'; i <= 'z'; i++)
{
for (j = 'A'; j <= 'Z'; j++)
{
if (c == i || c == j)
{
return (1);
}
}
}
return (0);
}

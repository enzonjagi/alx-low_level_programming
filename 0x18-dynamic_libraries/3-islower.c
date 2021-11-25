#include "holberton.h"

/**
 * _islower- this function checks if alphabet is lowercase
 * @c: the integer value it receives
 *
 * description:
 * _islower()
 * the function receives a character 'c'
 * then checks if it is in lowercase
 * after which returns 1
 * else it returns 0
 * Return: 1 or 0
 */

int _islower(int c)
{
int i = 'a';

for (i = 'a'; i <= 'z'; i++)
{
/*int c;*/

if (c == i)
{
return (1);
}
}
return (0);
}

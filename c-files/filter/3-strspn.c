#include "holberton.h"

/**
 * _strspn - returns number of bytes in the initial segment
 *           which consist only of bytes from accept
 * @s: string we're checking
 * @accept: substring we're cheking it against
 *
 * Return: n bytes of @s containing @accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int j;

	if (!(*s) || !(*accept))
	{
		return (n);
	}

	while (*s)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == *s)
			{
				n++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}

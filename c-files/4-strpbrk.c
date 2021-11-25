#include "holberton.h"

/**
 * _strpbrk - locates first occurence in s of any byte in accept
 * @s: string checked
 * @accept: what we're checking for
 *
 * Return: pointer to @s
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}

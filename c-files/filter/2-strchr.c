#include "holberton.h"


/**
 * _strchr - returns pointer to the first occurrence of c in s
 * @s: pointer to string
 * @c: character we're checking for
 *
 * Return: pointer to the first occurence of  @c in @s
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}

#include "holberton.h"
#include <stddef.h>

/**
 * _strchr - returns pointer to the first occurrence of c in s
 * @s: pointer to string
 * @c: character we're checking for
 *
 * Return: pointer to the first occurence of  @c in @s
 */

char *_strchr(char *s, char c)
{
	char *p = s;

	while (*p != '\0')
	{
		if (*p == c)
		{
			return (p);
		}
		p++;
	}
	return (NULL);
}

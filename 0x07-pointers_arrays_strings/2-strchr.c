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
	int i = 0;
	char *p;

	while (s[i] != '\0')
	{
		if (c == s[i])
		{
			p = &s[i];
			return (p);
		}
		i++;
	}
	return (NULL);
}

#include "holberton.h"

/**
 * _strstr - checks if 'haystack' has the substring 'needle'
 *           and returns the first occurence of this substring
 * @haystack: string we're checking
 * @needle: substring we're looking for
 *
 * Return: pointer to this occurence in @haystack
 */

char *_strstr(char *haystack, char *needle)
{
	char *a = haystack;
	char *b = needle;
	char *flag = haystack;

	if (!*b)
		return ('\0');
	while (*a != '\0' && *b != '\0')
	{
		flag = haystack;
		b = needle;

		while (*flag && *b && (*flag == *b))
		{
			flag++;
			b++;
		}
		++a;
		if (*a == *b)
		{
			return (a);
		}
	}
	return ('\0');
}

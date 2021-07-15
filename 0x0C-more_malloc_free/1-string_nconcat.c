#include "holberton.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * string_nconcat - concatenates s1 to the first n bytes of s2
 * @s1: string received
 * @s2: string
 * @n: bytes to be copied from s2
 *
 * Return: pointer to resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	len2++;
	if (n >= len2)
		n = len2;

	new = malloc((len1 + n + 1) * sizeof(*s1));
	if (new == NULL)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		new[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < n)
	{
		new[i] = s2[j];
		i++;
		j++;
	}
	new[-1] = '\0';

	return (new);
}

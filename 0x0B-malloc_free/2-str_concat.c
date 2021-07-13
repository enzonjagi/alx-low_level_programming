#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * str_concat - concatenates 2 strings and returns a pointer to the result
 * @s1: string to concetenate
 * @s2: another one
 *
 * Return: pointer to result string
 */

char *str_concat(char *s1, char *s2)
{
	char *new;
	int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = len1 = len2 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}

	new = malloc((len1 + len2) * sizeof(len1));
	if (new == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		new[i] = s1[i];
	for (j = 0; j <= len2; j++)
		new[j] = s2[j];

	return (new);
}

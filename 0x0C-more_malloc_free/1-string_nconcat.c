#include "holberton.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

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
	unsigned int i, j;
	/*unsigned int len1, len2, len;*/

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/*for (len1 = 0; s1[len1] != '\0'; len1++)
	 *;
	*for (len2 = 0; s2[len2] != '\0'; len2++)
	*	;
	*
	*len1 = strlen(s1);
	*len2 = strlen(s2);
	*
	 *if (n >= len2)
	 *	n = len2;
	*
	*len = len1 + n + 1;
	*/
	new = malloc(17);
	if (new == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		new[i] = s1[i];
	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		new[i] = s2[j];
		i++;
	}

	new[i] = '\0';

	return (new);
}

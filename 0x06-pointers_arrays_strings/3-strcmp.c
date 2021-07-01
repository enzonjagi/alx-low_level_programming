#include "holberton.h"

/**
 * _strcmp - compares two strings using pointers
 * @s1: the first string pointer
 * @s2: the second string pointer
 *
 * Return: (*s1 - *s2)
 */
int _strcmp(char *s1, char *s2)
{
	/*int i, j;*/

	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(s1) - *(s2));
}

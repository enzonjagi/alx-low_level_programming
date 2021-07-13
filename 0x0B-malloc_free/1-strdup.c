#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _strdup - returns pointer to a successfully copied string, NULL otherwise
 * @str: pointer to source string
 *
 * Return: NULL or pointer to new string
 */

char *_strdup(char *str)
{
	char *new, *point;

	point = str;
	if (point == NULL)
		return (NULL);
	new = (char *)malloc(sizeof(str));
	point = new;
	if (point == NULL)
		return (NULL);
	strcpy(new, str);

	return (new);
}

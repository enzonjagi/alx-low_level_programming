#include "holberton.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array and initializes it with a char
 * @size: size it recieves
 * @c: the initializing char
 *
 * Return: pointer to array or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = malloc((sizeof(c)) * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}

#include "holberton.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: the size to be allocated
 *
 * Return: pointer to memory address
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}

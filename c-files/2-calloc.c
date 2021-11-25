#include <stdlib.h>
#include "holberton.h"

/**
 * _calloc - replicates the calloc(size_t num, size_t size)) function
 * @nmemb: the expected number of elements
 * @size: the expected size of an element
 *
 * Return: pointer to array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *setnull;
	unsigned int i;

	if (size == 0)
		return (NULL);
	if (nmemb == 0)
		return (NULL);
	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	setnull = ptr;
	for (i = 0; i < (nmemb * size); i++)
		setnull[i] = '\0';

	return (ptr);
}

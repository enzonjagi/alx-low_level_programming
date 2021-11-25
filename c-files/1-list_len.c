#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the list
 * Return: number of elements in linked list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr = NULL;

	ptr = h;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}

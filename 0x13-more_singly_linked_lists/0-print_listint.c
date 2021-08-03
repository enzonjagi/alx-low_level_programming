#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints data from all elements of a list
 * @h: pointer to start of the list hence the whole list
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *ptr = NULL;
	size_t nodes = 0;

	if (h == NULL)
		return (0);
	ptr = h;
	while (ptr != NULL)
	{
		nodes++;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}

	return (nodes);
}

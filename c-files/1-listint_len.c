#include "lists.h"

/**
 * listint_len - returns number of elements in a list
 * @h: pointer to the list
 * Return: node count
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *ptr = NULL;
	int nodecount = 0;

	if (h == NULL)
		return (0);
	ptr = h;
	while (ptr != NULL)
	{
		nodecount++;
		ptr = ptr->next;
	}
	return (nodecount);
}

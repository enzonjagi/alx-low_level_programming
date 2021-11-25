#include "lists.h"

/**
 * dlistint_len - returns number of nodes in the list
 * @h: pointer to start of the list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int count = 0;

	if (temp == NULL)
	{
		return (0);
	}
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}

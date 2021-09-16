#include "lists.h"
/**
 * print_dlistint - prints all elements of a doubly linked list
 * and returns the number of elements on there
 * @h: pointer to the head of the linked list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int count = 0;

	if (temp == NULL)
	{
		return (0);
	}
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}
	return (count);
}

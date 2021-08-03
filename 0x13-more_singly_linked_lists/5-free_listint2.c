#include "lists.h"

/**
 * free_listint2 - frees a linked list and sets head to NULL
 * @head: pointer to list pointer
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr, *h;

	h = *head;
	while (h != NULL)
	{
		ptr = h;
		h = h->next;
		free(ptr);
	}
	*head = NULL;
}

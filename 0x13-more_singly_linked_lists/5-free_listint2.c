#include "lists.h"

/**
 * free_listint2 - frees a linked list and sets head to NULL
 * @head: pointer to list pointer
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr, *h;

	if (head == NULL)
		return;
	h = *head;
	do{
		ptr = h;
		h = h->next;
		free(ptr);
	} while (h != NULL);
	*head = NULL;
}

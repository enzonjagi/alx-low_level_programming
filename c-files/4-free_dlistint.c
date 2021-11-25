#include "lists.h"
/**
 * free_dlistint - frees a doubly linked list
 * @head: pointer to list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr->next);
		free(ptr->prev);
		free(ptr);
	}
}

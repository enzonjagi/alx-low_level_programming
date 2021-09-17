#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node at a give index
 * @head: pointer to list
 * @index: index of to be deleted node
 * Return: 1 or -1 depending on success of deletion
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *ptr, *temp;

	ptr = *head;
	if (ptr == NULL)
		return (-1);
	while (ptr != NULL)
	{
		if (count == index)
		{
			temp = ptr;
			ptr = ptr->next;
			temp->prev->next = ptr;
			temp->next = NULL;
			temp->prev = NULL;
			return (1);
		}
		count++;
		ptr = ptr->next;
	}
	return (-1);
}

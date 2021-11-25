#include "1-listint_len.c"
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a npde at a certain index
 * @head: pointer to list
 * @index: the index where we need to delete
 * Return: -1 for failure, and 1 for success
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *prev = NULL;
	unsigned int count = 0, len = listint_len(*head);

	while (temp != NULL && index != count)
	{
		prev = temp;
		count++;
		temp = temp->next;
	}
	if (temp == NULL || index > len)
		return (-1);
	if (count == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	prev->next = temp->next;
	free(temp);
	return (1);
}

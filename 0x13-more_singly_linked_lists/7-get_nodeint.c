#include "lists.h"

/**
 * get_nodeint_at_index - returns node at nth position of list
 * @head: pointer to the list
 * @index: the index we need node from
 * Return: NULL or Pointer to the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = NULL, *temp = NULL;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	ptr = head;
	if (ptr == NULL)
		return (NULL);
	while (ptr && ptr->next != NULL)
	{
		if (index == count)
		{
			temp = ptr;
			break;
		}
		count++;
		ptr = ptr->next;
	}

	if (index > count)
		return (NULL);
	return (temp);
}

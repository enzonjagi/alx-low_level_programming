#include "lists.h"

/**
 * sum_listint - returns sum of data in the list
 * @head: pointer to the list
 * Return: 0 or sum
 */

int sum_listint(listint_t *head)
{
	int n, sum = 0;
	listint_t *ptr = NULL;

	if (head == NULL)
		return (0);
	ptr = head;
	while (ptr)
	{
		n = ptr->n;
		sum += n;
		if (ptr->next == NULL)
			break;
		ptr = ptr->next;
	}
	return (sum);
}

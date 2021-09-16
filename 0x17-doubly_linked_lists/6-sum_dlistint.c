#include "lists.h"

/**
 * sum_dlistint - returns sum of all data in the list
 * @head: pointer to head of list
 * Return: sum or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	if (temp == NULL)
	{
		return (0);
	}
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}

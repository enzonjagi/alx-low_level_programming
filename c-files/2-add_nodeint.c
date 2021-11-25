#include "lists.h"

/**
 * add_nodeint - adds a node at the beginnning of the list
 * @head: pointer to list
 * @n: data for the node we're adding
 * Return: pointer to list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = NULL;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (free(ptr), NULL);
	ptr->n = n;
	ptr->next = NULL;
	/*add node*/
	ptr->next = *head;
	*head = ptr;

	return (*head);
}

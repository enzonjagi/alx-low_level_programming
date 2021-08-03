#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a list
 * @head: pointer to list
 * @n: data for the new node
 * Return: pointer to the list of course
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = NULL;
	listint_t *ptr = NULL;

	/*for the list*/
	ptr = *head;
	while (ptr && ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	/*create new node*/
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (free(new), NULL);
	new->n = n;
	/*
	 *if (new == NULL)
	 *	return (free(new), NULL);
	 */
	new->next = NULL;
	/*add node to list*/
	if (ptr)
		ptr->next = new;
	else
		*head = new;

	return (new);
}

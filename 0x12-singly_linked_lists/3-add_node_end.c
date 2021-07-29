#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the list
 * @str: string value to be added to new node
 * Return: pointer to lastnode
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr = NULL;
	char *str2 = strdup(str);
	list_t *new = malloc(sizeof(list_t));

	new->str = str2;
	new->len = strlen(str2);
	new->next = NULL;
/*
 *	if (new == NULL)
 *		return (free(new), NULL);
 */
	ptr = *head;
	if (ptr == NULL)
		*head = new;
	else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = new;
	}
	return (*head);
}

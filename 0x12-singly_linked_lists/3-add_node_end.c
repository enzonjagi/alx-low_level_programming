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
	char *str2;
	list_t *new;

	ptr = *head;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);
	str2 = strdup(str);
	if (str2 == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(str);
	new->str = str2;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = new;

	return (new);
}

#include "lists.h"

/**
 * add_node - adds a node at the beginning of the list
 * @head: pointer to first node
 * @str: a string to duplicate
 * Return: address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
	char *str2;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	str2 = strdup(str);
	ptr->str = str2;
	/*ptr->len = sizeof(str2);*/
	ptr->next = NULL;
	/*add the node at the beginning*/
	ptr->next = *head;
	ptr->len = strlen(str);
	*head = ptr;

	return (*head);
}

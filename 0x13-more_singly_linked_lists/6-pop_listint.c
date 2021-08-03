#include "lists.h"

/**
 * pop_listint - removes head node of a list and returns its data
 * @head: double pointer to the list
 * Return: 0 or removed head node data
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr, *temp;
	int data;

	if (head == NULL)
		return (0);
	ptr = *head;
	/*Point to head node and move to next node*/
	data = ptr->n;
	temp = *head;
	*head = ptr->next;
	/*Save data and free the memory*/
	/*data = temp->n;*/
	free(temp);

	return (data);
}

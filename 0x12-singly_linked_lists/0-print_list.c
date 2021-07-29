#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all elements of a list
 * @h: pointer to a linked list
 * Return: number of nodes in list
 */

size_t print_list(const list_t *h)
{
	unsigned long int count = 0;
	const list_t *ptr;

	if (h == NULL)
		printf("(nil)");
	ptr = NULL;
	ptr = h;
	while (ptr != NULL)
	{
		count++;
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] %s\n", ptr->len, ptr->str);
		}
		ptr = ptr->next;
	}
	return (count);
}

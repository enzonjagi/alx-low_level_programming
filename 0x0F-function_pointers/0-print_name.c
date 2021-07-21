#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name using other fucntions
 * @name: the name
 * @f: the function pointer
 * Return: Void as usual
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}

#include "function_pointers.h"

/**
 * print_name - prints a name using other fucntions
 * @name: the name
 * @f: the function pointer
 * Return: Void as usual
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

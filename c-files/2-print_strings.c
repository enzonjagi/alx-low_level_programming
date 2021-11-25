#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line
 * @separator: separating string
 * @n: number of strings to be printed
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *at;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		at = va_arg(ap, char *);
		if (at == NULL)
			printf("(nil)");
		else
			printf("%s", at);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}

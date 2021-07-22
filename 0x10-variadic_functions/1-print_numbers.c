#include <stddef.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a newline
 * @separator: separating character or string
 * @n: number of integers expected
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n - 1; i++)
	{
		if (separator == NULL)
			printf("%d", va_arg(ap, int));
		else
		{
			printf("%d", va_arg(ap, int));
			printf("%s", separator);
		}
	}
	printf("%d", va_arg(ap, int));
	va_end(ap);
	printf("\n");
}

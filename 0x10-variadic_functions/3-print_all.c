#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: a list of format specifiers
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int len, i;
	va_list any;

	if (format == NULL)
		return;
	va_start(any, format);
	len = sizeof(format);

	while (format[i] < len)
	{
		if (format[i] == NULL)
		{
			printf("(nil)");
		}
		switch (format[i])
		{
		case "c"
		{
			printf("%c", va_arg(any, char));
			break;
		}
		case "i"
		{
			printf("%d", va_arg(any, int));
		}
		}
	}
}

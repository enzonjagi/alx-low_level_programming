#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"

/**
 * p_char - prints a char
 * @arg: the char
 * Return
 */
void p_char(va_list arg)
{
	printf("%c", (char)va_arg(arg, int));
}
/**
 * p_int - prints a char
 * @arg: the item
 * Return
 */
void p_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}
/**
 * p_float - prints a char
 * @arg: the char
 * Return
 */
void p_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}
/**
 * p_str - prints a char
 * @arg: the char
 * Return
 */
void p_str(va_list arg)
{
	char *ls;

	ls = va_arg(arg, char *);
	if (ls == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", ls);
}
/**
 * print_all - prints anything
 * @format: a list of format specifiers
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *sep = "";
	int i = 0, j = 0;

	op_t ops[] = {
		{"c", p_char},
		{"i", p_int},
		{"f", p_float},
		{"s", p_str},
	};
	va_start(args, format);
	while (format && (format[i]))
	{
		j = 0;
		while (j < 4 && (format[i] != *(ops[j].ch)))
		{
			j++;
		}
		if (j < 4)
		{
			printf("%s", sep);
			ops[j].f(args);
			sep = ", ";
		}
		i++;
	}
	va_end(args);
	printf("\n");

}

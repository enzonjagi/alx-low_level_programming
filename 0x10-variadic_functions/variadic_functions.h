#ifndef _VARIADIC_FUNCTIONS_H
#define _VARIADIC_FUNCTIONS_H
#include <stdarg.h>
/**
 * struct op - structure for types
 * @ch: the type
 * @f: function to be called
 */
typedef struct op
{
	char *ch;
	void (*f)(va_list arg);
} op_t;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /*_VARIADIC_FUNCTIONS_H*/

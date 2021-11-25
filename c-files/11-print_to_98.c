#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - this function prints natural numbers
 * @n: the integer value it receives
 *
 * description:
 * print_to_98()
 * the function receives an integer n
 * then prints all natural numbers from n to 98
 * Return: 0
 */

void print_to_98(int n)
{
/*int i = 0;*/

while (n != 98)
{
if (n < 98)
{
printf("%d, ", n);
n++;
}
else if (n > 98)
{
printf("%d, ", n);
n--;
}
}
printf("%d\n", n);
}

#include "holberton.h"

/**
 * times_table - this function prints the times table of 9
 * @void: empty parameter
 *
 * description:
 * times_table()
 * prints out the times table in rows and columns
 * from 0 all the way to 81
 * but is limited to 9 rows by 9 columns
 * Return: 0
 */

void times_table(void)
{
int i, j, times, ten, one;

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
times = i * j;
ten = times / 10;
one = times % 10;

if (j == 0)
{
_putchar('0');
}
else if (times < 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(one + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar(ten + '0');
_putchar(one + '0');
}
}
_putchar('\n');
}
}

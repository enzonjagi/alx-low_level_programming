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
int i = 0;
int n = '\n';
int times = 0;
int com = ',';
int space = ' ';

while (i < 10)
{
int j = 0;

/*_putchar((i / 10) + '0');_putchar((i % 10) + '0');*/

while (j < 10)
{

times = i * j;

_putchar((times / 10) + '0');
_putchar((times % 10) + '0');
_putchar(com);
_putchar(space);

j++;

}
_putchar((times / 10) + '0');
_putchar((times % 10) + '0');
_putchar(n);
i++;
}
}

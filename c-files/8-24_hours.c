#include "holberton.h"

/**
 * jack_bauer - this function prints the 24 hours of a day
 * @void: empty parameter
 *
 * description:
 * jack_bauer()
 * prints out each minute and second of the day
 * from 00:00 to 23:59
 * Return: 0
 */

void jack_bauer(void)
{
int i = 0;
int n = '\n';
int col = ':';

for (i = 0; i < 24; i++)
{
int j = 0;

/*_putchar((i / 10) + '0');_putchar((i % 10) + '0');*/


for (j = 0; j < 60; j++)
{
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
_putchar(col);
_putchar((j / 10) + '0');
_putchar((j % 10) + '0');
_putchar(n);
}
}
}

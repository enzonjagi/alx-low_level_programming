#include "holberton.h"

/**
 * print_alphabet_x10 - this function prints out alphabet in lowercase
 * @void: placeholder for the parameters required
 *
 * description:
 * print_alphabet_x10()
 * the function receives a function declaration
 * from the 'holberto.h' which it uses to print out the alphabet
 * required 10 times
 * Return: 0
 */

void print_alphabet_x10(void)
{
char n = '\n';
int j = 0;

for (j = 0; j < 10; j++)
{
char i = 'a';
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar(n);
}
}

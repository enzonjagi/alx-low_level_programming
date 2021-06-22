#include "holberton.h"

/**
 * print_alphabet - this function prints out alphabet in lowercase
 * @void: placeholder for the parameters required
 *
 * description:
 * print_alphabet()
 * the function receives a function declaration
 * from the 'fncall.h' which it uses to print out the alphabet
 * required
 * Return: 0
 */

void print_alphabet()
{
char i = 'a';
char n = '\n';

for (i = 'a'; i < 'z'; i++)
{
_putchar(i);
}
_putchar(n);
}

/*int main(void)
{
print
}*/

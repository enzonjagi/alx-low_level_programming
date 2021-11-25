#include "holberton.h"

/**
 * main - this function prints out 'Holberton' to stdout
 * @void: placeholder for the parameters required
 *
 * description:
 * main(void) --> return(0)
 * the main function receives a function declaration
 * from the 'fncall.h' which it uses to print out the string
 * required
 * Return: 0
 */

int main(void)
{
char str[] = "Holberton\n";
int i = 0;

while (str[i] != '\0')
{
char c = str[i];
_putchar(c);
i++;
}
return (0);
}

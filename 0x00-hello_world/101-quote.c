#include <stdio.h>

/**
 * main - prints out a string of text
 * @void: the placeholder for empty parameters
 *
 * Return: 0
 */
int main(void)
{
static const char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
 fwrite(message, sizeof(message) - 1, 1, stdout);
return (1);
}

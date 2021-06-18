#include <stdio.h>

/**
 * main - prints out the alphabet in lower case
 * @void: placeholder for returning null
 *
 * description:
 *    main(void); --> 0
 * The main function prints out the alphabet in lowercase
 * Does this using the putchar function
 * that receives a char as it's input
 * After which it prints out a newline
 * Return: 0
 */
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
	putchar(ch);
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - prints out the alphabet in lower case
 * @void: placeholder for returning null
 *
 * description:
 *    main(void); --> 0
 * The main function prints out the alphabet in lowercase
 * with the exception of 'q' and 'e'
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
	if (ch == 'e' && ch == 'q')
	{
	ch++;
	putchar(ch);
	}
	else
	{
	putchar(ch);
	}
	}
	putchar('\n');
	return (0);
}

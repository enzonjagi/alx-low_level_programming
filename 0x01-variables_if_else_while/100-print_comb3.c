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
	int number = '0';
	int num = '0';

	for (number = '0'; number <= '9'; number++)
	{
	/*putchar(number);*/
	for (num = '0'; num <= '9'; number++)
	{
	putchar(number);
	putchar(num);
	if (number != '9'  && num != '9')
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}

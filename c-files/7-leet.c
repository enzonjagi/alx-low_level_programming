#include "holberton.h"

/**
 * *leet - converts characters to repsective leet value
 * @str: string it receives
 *
 * Return: str
 */

char *leet(char *str)
{
	int i, j;
	char check[] = "a A e E o O t T l L";
	char repl[] = "4 4 3 3 0 0 7 7 1 1";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; check[j] != '\0' && repl[j] != '\0'; j++)
		{
			if (str[i] == check[j])
			{
				str[i] = repl[j];
			}
		}
	}
	return (str);
}

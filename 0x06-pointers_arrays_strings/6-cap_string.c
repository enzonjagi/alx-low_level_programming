#include "holberton.h"

/**
 * *cap_string - capitalizes each word of a string
 * @str: pointer to string received
 *
 * Return: str
 */

char *cap_string(char *str)
{
	int i, j;
	char seps[] = ", \n ; . ! ? \" ( ) { } \t";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; seps[j] != '\0'; j++)
		{
			if (i == 0)
			{
				if (str[i] >= 'a' && str[i] <= 'z')
				{
					str[i] = str[i] - 32;
				}
			}
			else if (*(str + i) == seps[j] || *(str + i) == '\n')
			{
				++i;
				if (str[i] >= 'a' && str[i] <= 'z')
				{
					str[i] = str[i] - 32;
				}
			}
		}
	}
	return (str);
}

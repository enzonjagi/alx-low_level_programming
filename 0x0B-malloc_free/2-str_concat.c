#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * str_concat - concatenates 2 strings and returns a pointer to the result
 * @s1: string to concetenate
 * @s2: another one
 *
 * Return: pointer to result string
 */

char *str_concat(char *s1, char *s2)
{
	char *new;
	/*char nullc = '\0';*/
	int len = 0;

	len = strlen(s1) + strlen(s2);
	new = (char *)malloc(sizeof(char) * (len + 1));
	if (new == NULL)
		return (NULL);
	strcat(new, s1);
	strcat(new, s2);
	/*strcat(new, nullc);*/

	return (new);
}

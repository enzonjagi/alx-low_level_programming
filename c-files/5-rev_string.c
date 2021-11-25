#include "holberton.h"
#include <string.h>

/**
 * rev_string - prints a string in reverse
 * @s: string passed as a parameter
 *
 * Return: void
 */

void rev_string(char *s)
{
	int len = 0, i, n;
	char tmp;


	/*check length of string*/
	while (*s != 0)
	{
		len++;
		s++;
	}

	s = s - len;
	n = len - 1; /*assign n the last value of the string*/

	/*assign i the values between first index and the first half*/
	/*swap the values of the two halfs*/
	for (i = 0; i < len / 2; i++)
	{
		tmp = *(s + i);
		*(s + i) = *(s + n);
		*(s + n) = tmp;
		n--;
	}
}

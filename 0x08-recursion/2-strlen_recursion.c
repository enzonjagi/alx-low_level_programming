#include "holberton.h"
#include <stdio.h>
/**
 * _strlen_recursion - returns the length of a string using recursion
 * @s: string received
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
	{
		return(len);
	}
	len++;
	s++;
	return (len + _strlen_recursion(s));
}

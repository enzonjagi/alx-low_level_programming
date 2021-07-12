#include "holberton.h"
#include <stdio.h>

/**
 * main - prints number of arguments passed followed by a new line
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	UNUSED(argc);
	printf("%s\n", argv[0]);

	return (0);
}

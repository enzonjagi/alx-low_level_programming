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
	int args_toPr;

	args_toPr = argc - 1;
	UNUSED(argv);
	printf("%d\n", args_toPr);

	return (0);
}

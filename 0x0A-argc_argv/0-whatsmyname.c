#include <stdio.h>
#include "holberton.h"

/**
 * main - prints number of arguments passed followed by a new line
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}

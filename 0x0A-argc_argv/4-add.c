#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include <string.h>

/**
 * main - prints number of arguments passed followed by a new line
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int add = 0, j = 1, i;

	if (argc == 1)
	{
		printf("Error\n");
		return (0);
	}
	while (j < argc)
	{
		for (i = 0; argv[j][i] != '\0'; i++)
		{
			if (!(isdigit(argv[j][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		add = add + atoi(argv[j]);
		j++;
	}
	printf("%d\n", add);
	return (0);
}

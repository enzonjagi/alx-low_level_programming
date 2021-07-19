#include <stdio.h>

/**
 * main - program prints name of the file it was compiled from
 *
 * Return: always void
 */
int main(void)
{
	printf("%s\n", __FILE__);
}

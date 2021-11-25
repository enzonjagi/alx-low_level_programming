#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assigns a random value to n each time it is executed
 * @void: the placeholder for empty parameters
 *
 * description:
 *    main(void); --> 0
 * The main function assigns a random value on each execution
 * then checks to see if n is greater than 0 prints it is positive
 * else if n is equal to 0 it prints is zero
 * else it prints is negative
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	printf("%ld is positive\n", (long int)n);
	else if (n == 0)
	printf("%ld is zero\n", (long int)n);
	else
	printf("%ld is negative\n", (long int)n);
	return (0);
}

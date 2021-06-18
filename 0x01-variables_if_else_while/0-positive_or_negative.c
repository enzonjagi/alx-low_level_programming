#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/*
 * main - assigns a random value to n each time it is executed
 * @void: the placeholder for empty parameters
 *
 * Description: The main function assigns a random value on each execution
 * then checks to see if n is greater than 0: prints is positive
 * else if n is equal to 0: prints is zero
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
	printf("is positive\n");
	else if (n == 0)
	printf("is zero\n");
	else
	printf("is negative\n");
	return (0);
}

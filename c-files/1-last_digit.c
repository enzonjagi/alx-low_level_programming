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
	int x;
	char begin[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	/* your code goes there */
	if (x > 5)
	printf("%s %ld is %d and is greater than 5\n", begin, (long int)n, x);
	else if (x == 0)
	printf("%s %ld is %d and is 0\n", begin, (long int)n, x);
	else if ((x < 6) && (x != 0))
	printf("%s %ld is %d and is less than 6 and not 0\n", begin, (long int)n, x);
	return (0);
}

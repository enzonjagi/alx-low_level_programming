/**
 * factorial - returns the factorial of a number
 * @n: the integer to return factorial of
 *
 * Return: n * factorial(n - 1)
 */

int factorial(int n)
{
	if (n < 1)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}

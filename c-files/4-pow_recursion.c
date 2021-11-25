/**
 * _pow_recursion - returns x raised to the pow of y
 * @x: integer parameter
 * @y: integer parameter
 *
 * Return: x ^ y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}

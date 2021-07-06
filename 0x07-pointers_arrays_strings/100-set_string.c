/**
 * set_string - sets value of a pointer to a char
 * @s: double pointer to a string
 * @to: character pointer we're to point to
 *
 * Return: always void
 */

void set_string(char **s, char *to)
{
	*s = to;
}

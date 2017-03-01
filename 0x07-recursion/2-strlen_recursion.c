/**
 * _strlen_recursion - returns the length of a string.
 * @s: pointer to input string
 *
 * Return: calculated length
 *
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

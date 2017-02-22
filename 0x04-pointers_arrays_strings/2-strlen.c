/**
 * _strlen - returns the length of a string.
 * @s: input string
 *
 * Return: length of the string.
 *
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}

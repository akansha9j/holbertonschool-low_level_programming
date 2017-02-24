/**
 * string_toupper - hanges all lowercase letters of a string to uppercase.
 * @s: pointer to the input string
 *
 * Return: pointer to the updated string
 *
 */
char *string_toupper(char *s)
{
	char *p;

	p = s;
	while (*s != '\0')
	{
		if (*s >= 'a' && *s <= 'z')
		{
			*s = 'A' + (*s - 'a');
		}
		s++;
	}
	return (p);
}

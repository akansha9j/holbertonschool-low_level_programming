/**
 * *_strchr - locates a character in a string.
 * @s: pointer to the input string
 * @c: character to be located
 *
 * Return: pointer to the first occurrence of the character
 * NULL, if the character is not found
 *
 */
char *_strchr(char *s, char c)
{
	int i;
	char *ch;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			break;
		}
	}
	ch = &s[i];

	return (ch);
}

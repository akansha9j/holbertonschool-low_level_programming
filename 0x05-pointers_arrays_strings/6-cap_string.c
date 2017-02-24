#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string.
 * @s: pointer to input string
 *
 * Return: pointer to updated string
 *
 */
char *cap_string(char *s)
{
	int last_is_delim, i;

	i = 0;
	last_is_delim = 1;
	while (s[i] != '\0')
	{
		if (last_is_delim == 1 && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = 'A' + (s[i] - 'a');
		}

		last_is_delim = is_delim(s[i]);

		i++;
	}
	return (s);
}

/**
 * is_delim - checks if the passed argument is a delimiter
 * @ch: input character
 *
 * Return: 1, if true
 * 0, if false
 *
 */
int is_delim(char ch)
{
	switch (ch)
	{
	case ' ':
	case '\t':
	case '\n':
	case ',':
	case ';':
	case '.':
	case '!':
	case '?':
	case '"':
	case '(':
	case ')':
	case '{':
	case '}':
		return (1);
	default:
		return (0);
	}
}

#include "holberton.h"

/**
 * rev_string - reverses a string.
 * @s: input string
 *
 * Return: void
 *
 */
void rev_string(char *s)
{
	int len, i, j, k;
	char ch;

	len = _strlen(s);

	if (len % 2 != 0)
	{
		i = ((len + 1) / 2) - 1;
	}
	else
	{
		i = (len / 2) - 1;
	}

	for (j = 0, k = len - 1; j <= i && k >= i; j++, k--)
	{
		ch = s[j];
		s[j] = s[k];
		s[k] = ch;
	}
}

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

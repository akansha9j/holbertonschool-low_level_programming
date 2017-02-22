#include "holberton.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: input string
 *
 * Return: void
 *
 */
void puts_half(char *str)
{
	int len, i, j;

	len = _strlen(str);

	if (len % 2 == 0)
	{
		i = len / 2;
	}
	else
	{
		i = (len + 1) / 2;
	}

	for (j = i; j <= (len - 1); j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}

/**
 * _strlen - returns the length of a string.
 * @s: input string
 *
 * Return: length of the string
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

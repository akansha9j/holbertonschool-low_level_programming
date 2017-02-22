#include "holberton.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: input string to be printed in reverse order
 *
 * Return: void
 *
 */
void print_rev(char *s)
{
	int len, i;

	len = _strlen(s);
	for (i = (len - 1); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
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

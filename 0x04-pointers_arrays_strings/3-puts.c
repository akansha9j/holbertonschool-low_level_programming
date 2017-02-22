#include "holberton.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: String to be printed
 *
 * Return: void
 *
 */
void _puts(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}
	_putchar('\n');
}

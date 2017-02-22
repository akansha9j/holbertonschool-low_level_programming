#include "holberton.h"

/**
 * puts2 - prints one char out of 2 of a string, followed by a new line.
 * @str: input string
 *
 * Return: void
 *
 */
void puts2(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		if (count % 2 == 0)
		{
			_putchar(str[count]);
		}
		count++;
	}
	_putchar('\n');
}

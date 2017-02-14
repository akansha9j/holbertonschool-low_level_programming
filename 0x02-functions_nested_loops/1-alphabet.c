#include "holberton.h"

/**
 * print_alphabet - Prints all the alphabets in lower cases
 *
 * Return: Nothing
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}

	_putchar('\n');
}

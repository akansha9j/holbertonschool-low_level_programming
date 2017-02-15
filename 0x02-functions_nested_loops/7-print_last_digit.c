#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i: the input number whose last digit is to printed
 *
 * Return: the value of the last digit
 *
 */
int print_last_digit(int i)
{
	int r;

	r = i % 10;
	if (r >= 0)
	{
		_putchar(r + '0');
		return (r);
	}
	else
	{
		r = r * -1;
		_putchar(r + '0');
		return (r);
	}
}

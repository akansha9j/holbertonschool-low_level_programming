#include "holberton.h"

/**
 * print_num - prints number
 * @n: input number
 *
 * Return: void
 *
 */
void print_num(unsigned int n)
{
	int p, q;

	p = n / 10;
	q = n % 10;
	_putchar(p + '0');
	_putchar(q + '0');
}
/**
 * jack_bauer - prints every minute of the day of Jack Bauer.
 *
 *
 * Return: void
 *
 */
void jack_bauer(void)
{
	int hour, min;

	for (hour = 0; hour <= 23; hour++)
	{
		for (min = 0; min <= 59; min++)
		{
			print_num(hour);
			_putchar(':');
			print_num(min);
			_putchar('\n');
		}
	}



}

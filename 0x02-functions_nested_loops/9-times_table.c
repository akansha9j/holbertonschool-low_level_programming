#include "holberton.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 *
 *
 * Return: Nothing
 */
void times_table(void)
{
	int i, j, val, m, n;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		_putchar(',');
		for (j = 1; j <= 9; j++)
		{
			val = i * j;
			_putchar(' ');
			if (val <= 9)
			{
				_putchar(' ');
				_putchar(val + '0');
			}
			else
			{
				m = val / 10;
				n = val % 10;
				_putchar(m + '0');
				_putchar(n + '0');
			}
			if (j < 9)
			{
				_putchar(',');
			}

		}
		_putchar('\n');
	}
}

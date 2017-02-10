#include <stdio.h>

/* This program prints numbers from 0 to 9 with
 * the help pf putchar function.
 */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar((char) ((int) '0' + i));
	}

	putchar('\n');
	return (0);
}

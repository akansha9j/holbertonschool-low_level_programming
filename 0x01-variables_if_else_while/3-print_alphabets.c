#include <stdio.h>

/* This programs types the alpahbets in lower case and then in upper cases. */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');
	return (0);
}

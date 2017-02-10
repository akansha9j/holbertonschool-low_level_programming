#include <stdio.h>

/* The program displays the alphabets in small letters
 *  except 'q' and 'e' followed by a new line.
*/


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
		if ((ch != 'e') && (ch != 'q'))
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}

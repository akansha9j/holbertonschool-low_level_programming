#include "holberton.h"

/**
 * _strcat -  concatenates two strings.
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to the resulting string
 *
 */
char *_strcat(char *dest, char *src)
{
	int lend, lens, i, j;

	lend = _strlen(dest);
	lens = _strlen(src);

	for (i = lend, j = 0; j <= lens; i++, j++)
	{
		dest[i] = src[j];
	}
	return (dest);
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

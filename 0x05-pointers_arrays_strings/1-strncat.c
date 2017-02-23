#include "holberton.h"

/**
 * _strncat - concatenates two strings.
 * @dest: destination string
 * @src: source string
 * @n: num of bytes
 *
 * Return: concatenated string
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int lend, i, j;

	lend = _strlen(dest);

	for (i = lend, j = 0; j < n && src[j] != '\0'; i++, j++)
	{
		dest[i] = src[j];
	}
	return (dest);
}

/**
 * _strlen - calculates length of a string
 * @s: input string
 *
 * Return: length of the string
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

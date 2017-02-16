#include "holberton.h"

/**
 * _isupper - checks for uppercase character.
 * @c: The input to check
 *
 * Return: 1, if an uppercase character is input
 * otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}

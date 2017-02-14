#include "holberton.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: the input integer to check
 *
 * Return: On success 1. Otherwise 0.
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

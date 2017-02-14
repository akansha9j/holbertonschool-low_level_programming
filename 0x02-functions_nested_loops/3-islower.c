#include "holberton.h"

/**
 * _islower - checks for lowercase character
 * @c:the integer to compare
 *
 * Return: On success 1. Otherwise 0.
 *
 */
int _islower(int c)
{
	if (('a' <= c) && (c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

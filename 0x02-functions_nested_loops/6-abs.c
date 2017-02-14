#include "holberton.h"

/**
 * _abs - computes the absolute value of an integer
 * @i: integer whose absolute value is to be found
 *
 * Return: the absolute value of passed integer
 *
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (-1 * i);
	}
}

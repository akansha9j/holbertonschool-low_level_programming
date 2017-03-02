#include "holberton.h"

/**
 * _sqrt_recursion - calculates the natural square root of a number
 * @n: input number
 *
 * Return: calculated square root
 * -1, if it does not exists
 *
 */
int _sqrt_recursion(int n)
{
	int div;

	if (n <= 0)
	{
		return (-1);
	}

	if (n == 1)
	{
		return (1);
	}

	else
	{
		div = 2;
		return (_sqrtis(n, div));
	}
}

/**
 * _sqrtis - calculates the natural square root of a number
 * @n: input number
 * @div: divisor
 *
 * Return: calculated square root
 * -1, if it does not exists
 *
 */
int _sqrtis(int n, int div)
{
	if (div == n)
	{
		return (-1);
	}
	else
	{
		if (n == div * div)
		{
			return (div);
		}
		else
		{
			return (_sqrtis(n, div + 1));
		}
	}
}

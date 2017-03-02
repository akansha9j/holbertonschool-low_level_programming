#include "holberton.h"

/**
 * is_prime_number - checks if the input number is prime
 * @n: input number
 *
 * Return: 1, if the number is s prime
 * 0, if it is not.
 *
 */
int is_prime_number(int n)
{
	int div;

	if (n <= 1)
	{
		return (0);
	}

	div = 2;

	return (is_prime_rec(n, div));
}
/**
 * is_prime_rec - checks if the number is prime or not
 * @n: input number
 * @div: divisor
 *
 * Return: 1, if the number is prime
 * 0, if it is not
 *
 */
int is_prime_rec(int n, int div)
{
	if (div == n)
	{
		return (1);
	}
	else
	{
		if (n % div == 0)
		{
			return (0);
		}
		else
		{
			return (1 * is_prime_rec(n, div + 1));
		}
	}
}

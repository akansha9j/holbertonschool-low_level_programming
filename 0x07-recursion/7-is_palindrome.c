#include "holberton.h"

/**
 * is_palindrome - checks if the input string is
 * a palindrome
 * @s: pointer to the input string
 *
 * Return: 1, if it is a palindrome
 * otherwise, 0
 *
 */
int is_palindrome(char *s)
{
	int len, i;

	i = 0;
	len = _strlen_rec(s);
	if (len == 0)
	{
		return (1);
	}

	return (is_palindrome_rec(s, i, len));

}
/**
 * _strlen_rec - calculates length of input string recursively
 * @s: pointer to the input string
 *
 * Return: length
 *
 */
int _strlen_rec(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_rec(s + 1));
	}
}
/**
 * is_palindrome_rec - checks if the input string is a palindrome
 * @s: pointer to input string
 * @i: index
 * @len: length of the input string
 *
 * Return: 1, if string is a palindrome
 * 0, if it is not
 *
 */
int is_palindrome_rec(char *s, int i, int len)
{

	if (i >= len - 1 - i)
	{
		return (1);
	}
	else
	{
		if (s[i] == s[len - 1 - i])
		{
			return (1 * is_palindrome_rec(s, i + 1, len));
		}
		else
		{
			return (0);
		}
	}
}

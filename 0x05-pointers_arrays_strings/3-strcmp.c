#include "holberton.h"

/**
 * _strcmp - compares two strings.
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 *
 * Return: integer
 *
 */
int _strcmp(char *s1, char *s2)
{
	int ls1, ls2, i;

	ls1 = _strlen(s1);
	ls2 = _strlen(s2);

	for (i = 0; i < ls1 && i < ls2; i++)
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] < s2[i])
			{
				return (-15);
			}
			else
			{
				return (15);
			}
		}

	}

	if (ls1 < ls2)
	{
		return (-15);
	}
	else if (ls1 == ls2)
	{
		return (0);
	}
	else
	{
		return (15);
	}
}

/**
 * _strlen - calculates length of the string
 * @s: input string
 *
 * Return: length of the string
 *
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

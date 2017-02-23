#include "holberton.h"

/**
 * _atoi - convert a string to an integer.
 * @s: input string
 *
 * Return: integer
 *
 */
int _atoi(char *s)
{
	int i, j, num, mult, index_num, start_index, last_index;

	/* Checking if string has any numbers. */

	index_num = num_indx(s);
	if (index_num == -1)
	{
		return (0);
	}

	start_index = index_num;

	/**
	 *  Calling last_indx function to calculate
	 *  the last index of our number in string.
	 */

	last_index = last_indx(s);

	num = 0;

	/**
	 *  Calling cal_sign function to determine
	 *  if the number is positive or negative.
	 */

	mult = cal_sign(s);

	for (i = last_index, j = 1; i >= start_index; i--, j *= 10)
	{
		num = num + (s[i] - '0') * j;
	}

	return (num * mult);
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

/**
 * cal_sign - determines if the num is pos or neg.
 * @s: input string
 *
 * Return: 1, if num is neg
 * 0, if num is pos
 *
 */
int cal_sign(char *s)
{
	int i, index_num, multiplier;

	multiplier = 1;
	i = 0;
	index_num = num_indx(s);

	while (i < index_num)
	{
		if (s[i] == '-')
		{
			multiplier *= -1;
		}
		i++;
	}

		return (multiplier);
}

/**
 * num_indx - calculating string index where the
 * number starts.
 * @s: input string
 *
 * Return: index
 * -1, if there are no numbers.
 *
 */

int num_indx(char *s)
{
	int i, len;

	len = _strlen(s);

	for (i = 0; i < len; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			return (i);
		}
	}
	return (-1);
}

/**
 * last_indx - calculates the index till where
 * the number is present.
 * @s: input string
 *
 * Return: last index
 *
 */
int last_indx(char *s)
{
	int start_index, i, len;

	len = _strlen(s);
	start_index = num_indx(s);

	if (start_index == -1)
	{
		return (-1);
	}
	else
	{
		for (i = start_index; i < len; i++)
		{
			if (!(s[i] >= '0' && s[i] <= '9'))
			{
				return (i - 1);
			}

		}
		return (i - 1);
	}
}

#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 * @a: input array
 * @n: number of elements to be printed
 *
 * Return: void
 *
 */
void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		printf("\n");
		return;
	}

	if (!a)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == (n - 1))
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
}

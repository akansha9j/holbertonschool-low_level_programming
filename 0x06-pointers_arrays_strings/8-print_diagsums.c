#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a
 * square matrix of integers.
 * @a: pointer to the input array
 * @size: array size
 *
 * Return: void
 *
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (i = size - 1, j = size - 1; i >= 0 && j >= 0; i--, j--)
	{
		sum1 = sum1 + a[i * size + j];
	}

	for (i = 0, j = size - 1; i < size && j >= 0; i++, j--)
	{

		sum2 = sum2 + a[i * size + j];
	}
	printf("%d, %d\n", sum1, sum2);
}

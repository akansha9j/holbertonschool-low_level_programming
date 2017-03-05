#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - adds two numbers
 * @argc: count of arguments
 * @argv: pointers to the arguments
 *
 * Return: 0
 *
 */
int main(int argc, char *argv[])
{
	int i, sum;
	unsigned int j;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < strlen(argv[i]); j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

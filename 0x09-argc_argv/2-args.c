#include <stdio.h>

/**
 * main - prints all the arguments passed to it
 * @argc: count of pointers in the array
 * @argv: array of pointers
 *
 * Return: 0
 *
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: count of the number of arguments
 * @argv: array of pointers to the arguments
 *
 * Retrun: 0
 *
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}

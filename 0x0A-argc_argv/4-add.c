#include <stdio.h>
#include <stdlib.h>

/**
 * main - mainblock
 * @argc: num of args
 * @argv: args vals
 * Return: 1 fail, 0 success
 */

int main(int argc, char **argv)
{
	int total = 0, i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		total += atoi(argv[i]);
	}

	printf("%d\n", total);
	return (0);
}

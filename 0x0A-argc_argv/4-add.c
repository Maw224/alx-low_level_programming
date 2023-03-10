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
	int total = 0, i;

	for (i = 1; i < argc; i++)
	{
		if ((*argv[i] < 48 || *argv[i] > 57) && !(argv[i][0] == '-'))
		{
			printf("Error\n");
			return (1);
		}
		total += atoi(argv[i]);
	}

	printf("%d\n", total);
	return (0);
}

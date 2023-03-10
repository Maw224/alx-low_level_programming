#include <stdio.h>

/**
 * main - main block
 * @argc: num of args
 * @argv: args vals
 * Return: 0 success, 1 failure
 */

int main(int argc, char **argv)
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	return (0);
}

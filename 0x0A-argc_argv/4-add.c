#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * main - mainblock
 * @argc: num of args
 * @argv: args vals
 * Return: 1 fail, 0 success
 */

int main(int argc, char **argv)
{
	int total = 0, i;
	bool checked = true;

	if (!argc || argc < 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (*argv[i] < 48 || *argv[i] > 57)
		{
			checked = false;
			break;
		}
		total += atoi(argv[i]);
	}

	if (!checked)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", total);
	return (0);
}

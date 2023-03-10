#include <stdio.h>
#include <ctype.h>
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
	bool checked = true;

	if (!argc || argc < 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (isdigit(argv[i]))
			total += atoi(rgv[i]);
		else
		{
			checked = false;
			break;
		}
	}

	if (!checked)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", total);
	return (0);
}

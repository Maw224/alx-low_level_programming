#include <stdio.h>

/**
 * main - main block
 * @argc: num of args
 * @argv: val of args
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}

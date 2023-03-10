#include <stdio.h>
#include <stdlib.h>

/**
 * main - main blovk
 * @argc: num of args
 * @argv: arg vals
 * Return: 1 fail, 0 success
 */

int main(int argc, char **argv)
{
	int num, change, tot_change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (num <= 0)
	{
		printf("%d\n", 0);
		return (0);
	}
change_check:
	if (num >= 25)
		change = 25;
	else if (num >= 10)
		change = 10;
	else if (num >= 5)
		change = 5;
	else if (num >= 2)
		change = 2;
	else
		change = 1;
	while (num)
	{
		num -= change;
		tot_change++;
		if (num < change)
			break;
	}
	if (num)
		goto change_check;
	printf("%d\n", tot_change);
	return (0);
}

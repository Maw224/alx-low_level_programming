#include "main.h"
#include "stdio.h"

/**
 * main - main block
 * Return: 0
 */

int main(void)
{
	int x, result = 0;

	while (x < 1024)
	{
		if ((x % 3 == 0) || (x % 5 == 0))
			result += x;
		x++;
	}
	printf("%d\n", result);
	return (0);
}

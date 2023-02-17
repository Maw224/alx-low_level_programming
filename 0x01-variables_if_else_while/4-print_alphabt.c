#include <stdio.h>

/**
 * main - main block
 * Return: 0
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'e' && x != 'q')
			putchar(x);
	}
	printf("\n");
	return (0);
}

#include <stdio.h>

/**
 * main - main block
 * Return: 0
 */

int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
		putchar(x);
	putchar('\n');
	return (0);
}

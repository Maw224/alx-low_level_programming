#include <stdio.h>
#include <ctype.h>
/**
 * main - main block
 * Return: 0
 */

int main(void)
{
	char x = 'a';
	char y = 'A';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	while (y <= 'Z')
	{
		putchar(y);
		y++;
	}
	printf("\n");
	return (0);
}

#include <stdio.h>
#include <ctype.h>
/**
 * main - main block
 * Return: 0
 */

int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	while (x <= 'z')
	{
		putchar(toupper(x));
		x++;
	}
	return (0);
}

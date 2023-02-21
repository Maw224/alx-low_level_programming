#include "main.h"

/**
 * main - main block
 * Return: 0
 */

int main(void)
{
	char text[] = "_putchar";
	int i = 0;

	while (text[i] != "\0")
	{
		_putchar(text[i]);
	}
	_putchar('\n');
	return (0);
}

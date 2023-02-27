#include "main.h"
#include <string.h>

/**
 * print_rev - main block
 * @str: string
 */

void print_rev(char *str)
{
	unsigned int i;

	for (i = strlen(str) - 1; i >= 0; i--)
		_putchar(str[i]);
	_putchar('\n');
}	

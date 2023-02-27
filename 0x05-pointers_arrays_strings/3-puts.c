#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _puts - main block
 * @str: string
 */

void _puts(char *str)
{
	unsigned int i;

	for (i = 0; i < strlen(str); i++)
		_putchar(str[i]);
}

#include "main.h"
#include <string.h>

/**
 * puts_half - main block
 * @s: string
 */

void puts_half(char *s)
{
	int i, length, half;

	length = strlen(s);
	half = (length + 1) / 2;

	for (i = half; i < length; i++)
		_putchar(s[i]);
	_putchar('\n');
}

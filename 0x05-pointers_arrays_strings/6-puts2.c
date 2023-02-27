#include "main.h"
#include <string.h>

/**
 * puts2 - main block
 * @s: string
 */

void puts2(char *s)
{
	unsigned int i;

	for (i = 0; i < strlen(s); i += 2)
		_putchar(s[i]);
	_putchar('\n');
}

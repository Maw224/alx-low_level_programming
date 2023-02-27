#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _puts - main block
 * @str: string
 */

void _puts(char *str)
{
	write(1, str, strlen(str));
}

#include "main.h"

/**
 * _strlen_recursion - main block
 * @s: string
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
		_strlen_recursion(++i);
	return (i);
}

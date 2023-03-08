#include "main.h"

/**
 * _strlen_recursion - main block
 * @s: string
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i++;
		_strlen_recursion(++s);
	}
	return (i);
}

#include "main.h"

/**
 * _isalpha - main block
 * @c: Ascii for char
 * Return: 1 success, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

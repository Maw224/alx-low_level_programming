#include "main.h"

/**
 * _isdigit - main block
 * @c: char in ascii
 * Return: 1 success, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

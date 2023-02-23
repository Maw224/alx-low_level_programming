#include "main.h"

/**
 * _isupper - main block
 * @c: char in ascii
 * Return: 1 success, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}

#include "main.h"

/**
 * _islower - main block
 * Return: 1 is lower, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

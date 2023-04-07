#include "main.h"

/**
 * binary_to_uint - main block
 * @b: binary stream
 * Return: decimal representation
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0, twos = 1;
	int len = 0;

	if (!b)
		return (0);

	while (b[len])
		len++;

	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		dec += (b[len] - '0') * twos;
		twos *= 2;
	}
	return (dec);
}

#include "main.h"

/**
 * get_endianness - main block
 * Return: 0 big, 1 little
 */

int get_endianness(void)
{
	unsigned int x = 0x01;
	char *c = (char *) &x;

	return ((int) *c);
}

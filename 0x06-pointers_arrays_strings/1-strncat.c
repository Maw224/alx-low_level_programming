#include "main.h"
#include <string.h>

/**
 * _strncat - main block
 * @dest: string
 * @src: string
 * @n: number of bytes ti concat
 * Return: pointer to the concat
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}

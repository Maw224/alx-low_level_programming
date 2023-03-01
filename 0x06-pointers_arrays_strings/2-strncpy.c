#include "main.h"
#include <string.h>

/**
 * _strncpy - main block
 * @dest: string
 * @src: string
 * @n: nummber of bytes
 * Return: pointer to string
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}

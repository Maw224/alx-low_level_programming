#include "main.h"

/**
 * _strncpy - main block
 * @dest: string
 * @src: string
 * @n: nummber of bytes
 * Return: pointer to string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0, j = 0; src[j] != '\0' && n > 0; i++, j++, n--)
	{
		dest[i] = src[j];
	}
	return (dest);
}

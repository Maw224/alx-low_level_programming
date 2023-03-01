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
	int i;

	for (i = 0; src[i] != '\0' && n > 0; i++, n--)
	{
		dest[i] = src[i];
	}

	if (n > 0)
		dest[i + 1] = '\0';

	return (dest);
}

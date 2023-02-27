#include "main.h"
#include <string.h>

/**
 * *_strcpy - main block
 * @dest: destination of copy
 * @src: source of copy
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}

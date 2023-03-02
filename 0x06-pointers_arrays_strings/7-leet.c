#include "main.h"
#include "search.h"

/**
 * leet - main block
 * @s: string
 * Return: Encoded string
 */

char *leet(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		s[i] = search(s[i]);
	}
	return (s);
}

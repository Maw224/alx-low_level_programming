#include "main.h"
#include <string.h>
int _pal(char *, int, int);

/**
 * is_palindrome - main block
 * @s: string
 * Return: 1 pal, 0 otherwise
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (_pal(s, 0, strlen(s) - 1));
}

/**
 * _pal - secondary block
 * @s: string,
 * @i: first index
 * @j: last index
 * Return: 1 or 0
 */

int _pal(char *s, int i, int j)
{
	if (s[i] != s[j])
		return (0);
	else
		return (_pal(s, ++i, --j));
}

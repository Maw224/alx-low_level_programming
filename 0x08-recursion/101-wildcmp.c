#include "main.h"
int _cmp(char *, char *, int, int);

/**
 * wildcmp - main block
 * @s1: string
 * @s2: string
 * Return: 1 identical, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 && *s2)
		return (_cmp(s1, s2, 0, 0));
	return (0);
}

/**
 * _cmp - secodary block
 * @s1: string
 * @s2: string
 * @i: s1 index
 * @j: s2 index
 * Return: 1, 0
 */

int _cmp(char *s1, char *s2, int i, int j)
{
	if (s2[j] == '*')
		return (_cmp(s1, s2, i, ++j));
	if (s1[i] == s2[j])
	{
		if (s1[i] == '\0')
			return (1);
		return (_cmp(s1, s2, ++i, ++j));
	}
	else if (s[j - 1] == '*')
		return (_cmp(s1, s2, ++i, j));
	else
		return (0);	

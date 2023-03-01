#include "main.h"

/**
 * leet - main block
 * @s: string
 * Return: Encoded string
 */

char *leet(char *s)
{
	int i;
	/*
	 * char encrypt[5][3] = {{'o', 'O', '0'}, {'l', 'L', '1'}, {'e', 'E', '3'},
	 *	{'a', 'A', '4'}, {'t', 'T', '7'}};
	 */

	for (i = 0; s[i] != '\0'; i++)
	{
		while (s[i] == 'a' || s[i] == 'A')
			s[i] = '4';
		while (s[i] == 't' || s[i] == 'T')
			s[i] = '7';
		while (s[i] == 'l' || s[i] == 'L')
			s[i] = '1';
		while (s[i] == 'o' || s[i] == 'O')
			s[i] = '0';
		while (s[i] == 'e' || s[i] == 'E')
			s[i] = '3';
	}
	return (s);
}

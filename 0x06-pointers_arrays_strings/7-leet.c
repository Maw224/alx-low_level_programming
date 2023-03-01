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
		if (s[i] == 'a' || s[i] == 'A')
			s[i] = '4';
		else if (s[i] == 't' || s[i] == 'T')
			s[i] = '7';
		else if (s[i] == 'l' || s[i] == 'L')
			s[i] = '1';
		else if (s[i] == 'o' || s[i] == 'O')
			s[i] = '0';
		else if (s[i] == 'e' || s[i] == 'E')
			s[i] = '3';
		else
			continue;
	}
	return (s);
}

#include "main.h"

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

/**
 * search - secondary block
 * @c: character
 * Return: character
 */

int search(char c)
{
	int i, j;
	char encrypt[5][3] = {{'o', 'O', '0'}, {'l', 'L', '1'}, {'e', 'E', '3'},
		{'a', 'A', '4'}, {'t', 'T', '7'}};

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 2; j++)
		{
			if (c == encrypt[i][j])
				c = encrypt[i][2];
		}
	}
	return (c);
}

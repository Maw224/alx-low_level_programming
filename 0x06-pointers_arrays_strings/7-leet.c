#include "main.h"

/**
 * leet - main block
 * @s: string
 * Return: Encoded string
 */

char *leet(char *s)
{
	int i;

	char encrypt[5][3] = {{'o', 'O', '0'}, {'l', 'L', '1'}, {'e', 'E', '3'},
		{'a', 'A', '4'}, {'t', 'T', '7'}};

	for (i = 0; s[i] != '\0'; i++)
	{
		s[i] = search(s[i], encrypt);
	}
	return (s);
}

/**
 * search - secondary block
 * @c: character
 * @arr: array
 * Return: Character
 */

int search(int c, char *arr)
{
	int i, j;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 2; j++)
		{
			if (c == arr[i][j])
				return (arr[i][2]);
		}
	}
	return (c);
}

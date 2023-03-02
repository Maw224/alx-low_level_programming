#include "main.h"

/**
 * search - main block
 * @c: character
 * Return: Character
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

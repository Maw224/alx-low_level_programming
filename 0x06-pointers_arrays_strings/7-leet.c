#include "main.h"

/**
 * leet - main block
 * @s: string
 * Return: Encoded string
 */

char *leet(char *s)
{
	int i, j, k;
	
	char encrypt[5][3] = {{'o', 'O', '0'}, {'l', 'L', '1'}, {'e', 'E', '3'},
		{'a', 'A', '4'}, {'t', 'T', '7'}};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0, k = 0; j < 5 && k < 2; k++)
		{
			if (s[i] == encrypt[j][k])
			{
				s[i] = encrypt[j][2];
			}
			else if (k == 2)
			{
				k = 0;
				j++;
			}
		}
	}
	return (s);
}

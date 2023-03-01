#include "main.h"

/**
 * leet - main block
 * @s: string
 * Return: Encoded string
 */

char *leet(char *s)
{
	int i, j, k;
	char encrypt[][] = {{"o", "O", "0"}, {"l", "L", "1"}, {"e", "E", "3"},
		{"a", "A", "4"}, {"t", "T", "7"}};

	for (i = 0, j = 0; s[i] != '\0' && j < 5; j++)
	{
		for (k = 0; k < 2; k++)
		{
			if (s[i] == encrypt[j][k])
			{
				s[i] = encrypt[j][2];
				i++;
				j = 0;
				break;
			}
		}
	}
	return (s);
}
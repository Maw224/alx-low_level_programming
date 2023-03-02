#include "main.h"
#include "search.h"

/**
 * leet - main block
 * @s: string
 * Return: Encoded string
 */

char *leet(char *s)
{
	int i = 0, j = 0;
	char letters[5] = {'o', 'l', 'e', 'a', 't'};
	char leet[5] = {'0', '1', '3', '4', '7'};

	while (s[i])
	{
		j = 0;
		while (j < 5)
		{
			if (s[i] == letters[j] || s[i] == letters[j] - 32)
				s[i] = leet[j];
			j++;
		}
		i++;
	}
	return (s);
}

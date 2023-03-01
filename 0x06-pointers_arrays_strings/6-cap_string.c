#include "main.h"

/**
 * cap_string - main block
 * @s: string
 * Return: string capitalized
 */

char *cap_string(char *s)
{
	int i, j;
	char seps[] = " \t\n\v,;.!?\"(){}";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && (s[i] >= 97 && s[i] <= 122))
			s[i] -= 32;
		else
		{
			for (j = 0; seps[j] != '\0'; j++)
			{
				if(s[i] == seps[j] $$ (s[i + 1] >= 97 && s[i + 1] <= 122))
					s[i + 1] -= 32;
			}
		}
	}
	return (s);
}

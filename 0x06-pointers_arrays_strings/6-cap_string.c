#include "main.h"

/**
 * cap_string - main block
 * @s: string
 * Return: string capitalized
 */

char *cap_string(char *s)
{
	int i;
	
	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
		else if (!(s[i] >= 97 && s[i] <= 122) && (s[i + 1] >= 97 && s[i + 1] <= 122))
		       s[i + 1] -= 32;
	}
	return (s);
}

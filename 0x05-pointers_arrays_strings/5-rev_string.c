#include "main.h"
#include <string.h>

/**
 * rev_string - main block
 * @s: string
 */

void rev_string(char *s)
{
	int i, j, k;
	char c;

	for (i = 0; s[i] != '\0', i++)
		;

	k = i;

	for (i--, j = 0; j < k / 2; i--, j++)
	{
		c = s[j];
		s[j] = s[i];
		s[i] = c;
	}
}

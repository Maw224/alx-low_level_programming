#include "main.h"
#include <string.h>

/**
 * rev_string - main block
 * @s: string
 */

void rev_string(char *s)
{
	unsigned int i, j, k;

	j = 0;

	for (i = strlen(s); i > 0, j < i / 2; i--, j++)
	{
		k = s[j];
		s[j] = s[i - 1];
		s[i] = k;
	}
}

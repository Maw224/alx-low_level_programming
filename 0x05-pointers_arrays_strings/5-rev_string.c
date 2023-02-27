#include "main.h"
#include <strig.h>

/**
 * rev_string - main block
 * @s: string
 */

void rev_string(char *s)
{
	unsigned int i, j;

	j = 0;

	for (i = strlen(s); i > 0, i--)
	{
		s[j] = s[i - 1];
		j++
	}
}

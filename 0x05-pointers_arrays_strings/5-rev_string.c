#include "main.h"
#include <string.h>

/**
 * rev_string - main block
 * @s: string
 */

void rev_string(char *s)
{
	unsigned int j = strlen(s), i;
	char rev[j];

	for (i = j; i > 0; i--)
	{
		strncat(rev, &s[i - 1], 1);
	}
	s = rev;
}

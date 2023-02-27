#include "main.h"
#include <string.h>

/**
 * rev_string - main block
 * @s: string
 */

void rev_string(char *s)
{
	unsigned int i;
	char rev[strlen(s)];

	for (i = strlen(s); i > 0; i--)
	{
		strncat(rev, &s[i - 1], 1);
	}
	s = rev;
}

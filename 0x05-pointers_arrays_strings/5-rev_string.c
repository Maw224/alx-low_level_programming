#include "main.h"
#include <string.h>

/**
 * rev_string - main block
 * @s: string
 */

void rev_string(char *s)
{
	unsigned int i;
	char rev[];

	for (i = strlen(s); i > 0; i--)
	{
		strcat(rev, s[i - 1]);
	}
	s = rev;
}

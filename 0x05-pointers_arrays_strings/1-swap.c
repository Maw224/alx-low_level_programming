#include "main.h"

/**
 * swap_int - main block
 * @n: pointer to number 1st
 * @m: pointer to number 2nd
 */

void swap_int(int *n, int *m)
{
	int c = *n;
	
	*n = *m;
	*m = c;
}

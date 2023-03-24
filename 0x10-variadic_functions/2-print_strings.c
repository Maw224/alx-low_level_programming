#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - main block
 * @n: num of args
 * @s: separator
 * @...:: args
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (s && i < (n - 1))
			printf("%s%s", va_arg(args, char *), s);
		else
			printf("%s", va_arg(args, char *));
	}
	printf("\n");
	va_end(args);

}

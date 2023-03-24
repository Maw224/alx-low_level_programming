#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - main block
 * @n: number of args
 * @s: seperator
 * @...: args
 */

void print_numbers(const char *s, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (s)
			printf("%d%s\n", va_arg(args, int), s);
		else
			printf("%d\n", va_arg(args, int));
	}
	va_end(args);
}

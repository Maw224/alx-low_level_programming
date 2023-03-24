#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - main block
 * @format: format to be printed
 * @...: args
 */

void print_all(const char * const format, ...)
{
	printer funcs[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_int},
		{"f", print_float}
	};
	va_list args;
	unsigned int i, j, len = 0;

	for (i = 0; format[i]; i++)
		len++;

	va_start(args, format);
	for (i = 0; format[i]; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (format[i] == *(funcs[j].format))
			{
				funcs[j].f(args);
				if (i < (len - 1))
					printf(", ");
			}
		}
	}
	printf("\n");
	va_end(args);
}

/**
 * print_char - prints character
 * @args: va list of args
 */

void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_string - prints string
 * @args: va list of args
 */

void print_string(va_list args)
{
	char *str;

	str = va_arg(args, char *);
	if (str)
		printf("%s", str);
	else
		printf("(nil)");
}

/**
 * print_int - prints integer
 * @args: va list of args
 */

void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - prints float
 * @args: va list of args
 */

void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

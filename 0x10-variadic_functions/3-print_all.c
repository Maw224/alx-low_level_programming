#include "variadic_functions.h"
#include <Stdarg.h>
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
	unsigned int i, j;

	for(i = 0; format[i]; i++)
	{
		for (j = 0; funcs[j]; j++)
		{
			if (format[i] == funcs[j].format)
				funcs[j].f(args);
		}
	}

}

/**
 * print_char - prints character
 * @args: va list of args
 */

void print_char(va_list args)
{
	va_start(args);
	printf("%c", va_arg(args, char));
	va_end(args);
}

/**
 * print_string - prints string
 * @args: va list of args
 */

void print_string(va_list args)
{
        va_start(args);
        printf("%s", va_arg(args, char *));
        va_end(args);
}

/**
 * print_int - prints integer
 * @args: va list of args
 */

void print_int(va_list args)
{
        va_start(args);
        printf("%d", va_arg(args, int));
        va_end(args);
}

/**
 * print_float - prints float
 * @args: va list of args
 */

void print_float(va_list args)
{
        va_start(args);
        printf("%f", va_arg(args, float));
        va_end(args);
}

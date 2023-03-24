#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

typedef struct Print
{
	format char;
	void (*f)(va_list args);
} printer;

int sum_them_all(const unsigned int, ...);
void print_numbers(const char *, const unsigned int, ...);
void print_strings(const char *, const unsigned int, ...);
void print_all(const char * const format, ...);
void print_char(va_list);
void print_string(va_list);
void print_int(va_list);
void print_float(va_list);

#endif

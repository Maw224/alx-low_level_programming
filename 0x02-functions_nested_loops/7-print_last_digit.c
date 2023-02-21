#include "main.h"

/**
 * print_last_digit - main block
 * @n: number
 * Return: last digit of @n
 */

int print_last_digit(int n)
{
	if (n > 0)
	{
		_putchar('0' + n % 10);
		return (n % 10);
	}
	else
	{
		_putchar('0' + (n % 10) * -1);
		return ((n % 10) * -1);
	}
}

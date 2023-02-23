#include <stdio.h>
#include <math.h>

/**
 * main - main block
 * Return: 0
 */

int main(void)
{
	long i, max;
	long n = 612852475143;
	long sq_rt = sqrt(n);

	for (i = 1; i <= sq_rt; i++)
	{
		if (n % i == 0)
			max = n / i;
	}
	printf("%ld\n", max);
	return (0);
}


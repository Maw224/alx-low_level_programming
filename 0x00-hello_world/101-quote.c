#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
 * main - main block
 * Return: 1
 */
int main(void)
{
	int str_len = strlen(
			"and that piece of art is useful\" - Dora Korbar, 2015-10-19\n"
		);

	write(1,
		"and that piece of art is useful\" - Dora Korbar, 2015-10-19\n",
		str_len
		);
	return (1);
}

#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - main block
 * Return: 0
 */

int main(void)
{
	int i, random;
	char numbers[] = "0123456789";
	char letters[] = "qwertyuiopasdfhjklzxcvbnm";
	char LETTERS[] = "QWERTYUIOPASDFGHJKLZXCVBNM";
	char symbols[] = "!@#$^&*?";
	char password[15];

	srand((unsigned int)(time(NULL)));
	random = rand() % 4;

	for (i = 0; i < 15; i++)
	{
		if (random == 1)
		{
			password[i] = numbers[rand() % 10];
			random = rand() % 4;
			printf("%c", password[i]);
		}
		if (random == 2)
		{
			password[i] = letters[rand() % 26];
			random = rand() % 4;
			printf("%c", password[i]);
		}
		if (random == 3)
		{
			password[i] = LETTERS[rand() % 26];
			random = rand() % 4;
			printf("%c", password[i]);
		}
		else
		{
			password[i] = symbols[rand() % 8];
			random = rand() % 4;
			printf("%c", password[i]);
		}
	}
	printf("%s", password);
	return (0);
}

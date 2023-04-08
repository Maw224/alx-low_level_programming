#include "main.h"
#include <stdio.h>

/**
 * main - main block
 * @argc: num of args passed
 * @argv: args
 * Return: 0 success, 97 wrong num of args, 98 cant read file, 99 cant write to file, 100 cant close
 */

int main(int argc, char **argv)
{
	ssize_t o1, o2, r, w, c1, c2;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = malloc(sizeof(char) * 1024);

	o1 = open(argv[1], O_RDONLY);
	o2 = open(argv[2], O_CREAT | O_WRONLY, 0664);
	r = read(o1, buf, 1024);

	while (r > 0)
	{
		if (o1 == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		w = write(o2, buf, r);
		if (w == -1 || o2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		r = read(o1, buf, 1024);
		o2 = open(argv[2], O_WRONLY | O_APPEND);
	}
	free(buf);
	c1 = close(o1);
	c2 = close(o2);
	if (c1 == -1 || c2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", (c1 || c2));
		exit(100);
	}

	return (0);
}

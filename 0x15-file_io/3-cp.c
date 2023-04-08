#include "main.h"
#include <stdio.h>

void close_file(int);
char *buf_create(char *);

/**
 * main - main block
 * @argc: num of args passed
 * @argv: args
 * Return: 0 success, 97 wrong num of args,
 *	98 cant read file, 99 cant write to file, 100 cant close
 */

int main(int argc, char **argv)
{
	ssize_t o1, o2, r, w;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO,
				"Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = buf_create(argv[2]);
	o1 = open(argv[1], O_RDONLY);
	r = read(o1, buf, 1024);
	o2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (o1 == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		w = write(o2, buf, r);
		if (w == -1 || o2 == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		r = read(o1, buf, 1024);
		o2 = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);
	free(buf);
	close_file(o1);
	close_file(o2);

	return (0);
}

/**
 * close_file - close an opened file
 * @f: file
 * Return: result
 */

void close_file(int f)
{
	int c;

	c = close(f);
	if (c == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", c);
		exit(100);
	}
}

/**
 * buf_create - create buffer
 * @f: file to be written in
 * Return: pointer to the buffer
 */

char *buf_create(char *f)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);
	if (!buf)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", f);
		exit(99);
	}

	return (buf);
}

#include "main.h"

/**
 * read_textfile - main block
 * @filename: file name
 * letters: num of letters
 * Return: num of letters can read and write
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t w, r, o;
	char *buf;

	if (!filename)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	if (o == -1 || r == -1 || w == -1)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(o);
	return (w);
}

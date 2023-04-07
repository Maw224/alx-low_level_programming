#include "main.h"

/**
 * read_textfile - main block
 * @filename: file name
 * letters: num of letters
 * Return: num of letters can read and write
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t write, read, open;
	char *buf;

	if (!filename)
		return (0);

	buf = malloc(sizeoF(char) * letters);
	if (!buf)
		return (0);

	open = open(filename, O_RDONLY);
	read = read(open, buf, letters);
	write = write(STDOUT_FILENO, buf, read);

	if (open == -1 || read == -1 || write == -1)
	{
		free(buf);
		return (0);
	}
	
	free(buf);
	close(open);
	return (write);
}

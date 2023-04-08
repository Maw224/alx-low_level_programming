#include "main.h"

/**
 * create_file - main block
 * @filename: file name
 * @text_content: text content
 * Return: 1 success, -1 failur
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t o, w;
	size_t letters = 0;

	if (!filename)
		return (-1);

	if (!text_content)
	{
		while (text_content[letters])
			letters++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, letters);

	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);
}

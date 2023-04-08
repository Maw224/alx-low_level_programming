#include "main.h"

/**
 * append_text_to_file - main block
 * @filename: file name
 * @text_content: text to append
 * Return: 1 success, -1 failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t o, a;
	size_t letters = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		while (text_content[letters])
			letters++;
	}

	o = open(filename, O_APPEND | O_RDWR);
	a = write(o, text_content, letters);

	if (o == -1 || a == -1)
		return (-1);

	close(o);
	return (1);

}

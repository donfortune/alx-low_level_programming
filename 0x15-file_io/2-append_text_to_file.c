#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the filename.
 * @text_content: content inside the file.
 *
 * Return: 1 if the file exists. -1 if it fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int letters;
	int byte_write;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	if (text_content)
	{
		for (letters = 0; text_content[letters]; letters++)
			;

		byte_write = write(file, text_content, letters);

		if (byte_write == -1)
			return (-1);
	}

	close(file);

	return (1);
}

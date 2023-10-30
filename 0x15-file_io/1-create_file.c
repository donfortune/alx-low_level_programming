#include "main.h"

/**
 * create_file - creates a file
 * @filename: the filename.
 * @text_content: content of the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int letters;
	int byte_write;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (letters = 0; text_content[letters]; letters++)
		;

	byte_write = write(file, text_content, letters);

	if (byte_write == -1)
		return (-1);

	close(file);

	return (1);
}

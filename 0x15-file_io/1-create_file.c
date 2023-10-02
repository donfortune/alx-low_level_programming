#include "main.h"

/**
 * read_textfile - read a text file.
 * @filename: the name of the file.
 * @letters: numbers of letters to be printed.
 * Return: numbers of letters printed. It fails, returns 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t bytes_read;
	ssize_t bytes_write;
	char *buf;

	if (!filename)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	bytes_read = read(file, buf, letters);
	bytes_write = write(STDOUT_FILENO, buf, bytes_read);

	close(file);

	free(buf);

	return (bytes_write);
}

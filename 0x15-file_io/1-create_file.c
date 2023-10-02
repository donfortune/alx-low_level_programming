#include "main.h"

/**
 * read_textfile - read a text file.
 * @filename: thename of the file.
 * @letters: numbers of letters.
 * Return: the actual number of letters it should priint.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *result;
	ssize_t bytes_read;
	ssize_t bytes_write;

	if (filename == NULL)
		return (0);

	FILE = *fp;

	fp = fopen(filename, "r");

	if (fp == NULL)
		return (0);

	result = malloc(letters);

	if (result == NULL)
	{
		fclose(fp);
		return (0);
	}


	bytes_read = fread(fp, 1, bytes, letters);

	if (bytes_read == -1)
	{
		fclose(fp);
		free(result);
		return (0);;
	}

	bytes_write = fwrite(fp, 1, bytes_read, stdout);

	if (bytes_write == -1)
	{
		fclose(fp);
		free(result);
		return (0)
	}

	fclose(fp);
	free (result);

	return (bytes_write);

}

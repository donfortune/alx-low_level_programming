#include "main.h"
/**
* error_message - error messag
 * @message: the error message
 * @exit_point: argument.
 * Return: no return.
 */
void error_message(const char *message, int exit_point)
{
	dprintf(2, "%s\n", message);
	exit(exit_point);
}

/**
 * copy_file - copy the files.
 * @file_from: the files from.
 * @file_to: the new file to.
 * Return: return.
 */
void copy_file(const char *file_from, const char *file_to)
{
	int file_sending = open(file_from, O_RDONLY);

	if (file_sending == -1)
	{
		error_mesage("cannot read file", 98);
	}

	int file_receive = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);

	if (file_receive == -1)
	{
		close(file_sending);
		error_message("cant write to file", 99);
	}
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(file_receive, buffer, bytes_read);

		if (bytes_written == -1)
		{
			close(file_sending);
			close(file_rceive);
			error_message("cant write to file", 99);
		}
	}

	if (bytes_read == -1)
	{
		close(file_sending);
		close(file_rceive);
		error_message("cant write to file", 98);
	}

	if (close(file_sending) == -1 || close(file_receive) == -1)
	{
		error_message("cant write to file", 100);
	}
}
/**
 * main - main function.
 * @argc: argument count.
 * @argv: arguments.
 * Return: always zero.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		error_message("copy files", 97);
	}

	copy_file(argv[1], argv[2]);
	return (0);
}

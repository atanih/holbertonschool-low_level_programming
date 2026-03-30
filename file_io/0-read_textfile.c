#include "main.h"

/**
 * read_textfile - reads a text file and prints it to stdout
 * @filename: name of the file
 * @letters: number of letters to read and print
 *
 * Return: actual number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nread, nwrite;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	nread = read(fd, buffer, letters);
	if (nread == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	nwrite = write(STDOUT_FILENO, buffer, nread);
	if (nwrite != nread)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);
	return (nwrite);
}


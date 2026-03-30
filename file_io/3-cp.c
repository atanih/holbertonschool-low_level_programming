#include "main.h"

/**
 * open_files - opens source and destination files
 * @av: argument vector
 * @fd_from: pointer to source fd
 * @fd_to: pointer to destination fd
 */
void open_files(char **av, int *fd_from, int *fd_to)
{
	*fd_from = open(av[1], O_RDONLY);
	if (*fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	*fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (*fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
}

/**
 * copy_content - copies content from fd_from to fd_to
 * @av: argument vector
 * @fd_from: source file descriptor
 * @fd_to: destination file descriptor
 */
void copy_content(char **av, int fd_from, int fd_to)
{
	ssize_t nread, nwrite;
	char buffer[1024];

	while ((nread = read(fd_from, buffer, 1024)) > 0)
	{
		nwrite = write(fd_to, buffer, nread);
		if (nwrite == -1 || nwrite != nread)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
}

/**
 * main - copies content of a file to another
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	int fd_from, fd_to;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	open_files(av, &fd_from, &fd_to);
	copy_content(av, fd_from, fd_to);

	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return (0);
}


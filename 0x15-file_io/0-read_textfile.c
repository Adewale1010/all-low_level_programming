#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to the
 * POSIX standard output
 * @filename: Pointer ti the name of the file
 * @letters: Number of letter the function should read and print
 *
 * Return: If the function fails or filename is NULL - 0,
 * Otherwise the actual number of bytes the function can read
 * and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, 0_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	nrd = read(fd, buffer, letters);
	nwr = write(STDOUT_FILENO, buffer, nrd);

	close(fd);

	free(buffer);

	return (nwr);
}

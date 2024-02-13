#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - draft
 * @filename: draft
 * @letters: draft
 * Return: draft
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r;
	char *c = (char *) malloc(sizeof(char) * letters);

	
	if (filename == 0)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	r = read(fd, c, letters);
	if (r == -1)
		return (0);
	r = write(STDOUT_FILENO, c, r);
	if (r == -1)
		return (0);
	close(fd);
	free(c);
	return (r);
}

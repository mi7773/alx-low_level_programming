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
	ssize_t rdr, wrr, i;
	char *c = (char *) malloc(sizeof(char) * letters), *p = c;

	if (filename == 0)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	rdr = read(fd, c, letters);
	switch (rdr)
	{
		case -1:
			return (0);
		case 0:
			while (*p++ != 0)
				i++;
			wrr = write(STDOUT_FILENO, c, i);
			break;
		default:
			wrr = write(STDOUT_FILENO, c, rdr);
			break;
	}
	switch (wrr)
	{
		case -1:
			return (0);
		case 0:
			return (i);
		default:
			return (wrr);
	}
	close(fd);
	free(c);
}

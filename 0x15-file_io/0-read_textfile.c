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
	ssize_t rdr, wrr;
	char *c = (char *) malloc(sizeof(char) * ++letters);

	if (filename == 0)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	rdr = read(fd, c, --letters);
	if (rdr == -1)
		return (0);
	if (rdr == 0)
	{
		c[letters] = 0;
		wrr = write(STDOUT_FILENO, c, letters);
	}
	else
	{
		c[rdr] = 0;
		wrr = write(STDOUT_FILENO, c, rdr);
	}
	if (wrr == -1)
		return (0);
	free(c);
	return (wrr);
}

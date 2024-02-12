#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * create_file - draft
 * @filename: draft
 * @text_content: draft
 * Return: draft
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wrr, i = 0;

	if (filename == 0)
		return (-1);
	while (*text_content++ != 0)
		i++;
	fd = open(filename, O_TRUNC);
	if (fd == -1)
		fd = open(filename, O_CREAT | O_WRONLY, S_IRUSR | S_IWUSR);
	wrr = write(fd, text_content - i - 1, i);
	if (wrr == -1)
		return (-1);

	close(fd);
	return (1);
}

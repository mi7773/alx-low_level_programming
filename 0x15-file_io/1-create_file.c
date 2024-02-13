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
	int fd, r, i = 0;

	if (filename == 0)
		return (-1);
	while (*text_content++ != 0)
		i++;
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	r = write(fd, text_content - i - 1, i);
	if (r == -1)
		return (-1);
	r = close(fd);
	if (r == -1)
		return (-1);
	return (1);
}

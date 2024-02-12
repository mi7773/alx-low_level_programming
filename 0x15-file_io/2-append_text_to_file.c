#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * append_text_to_file - draft
 * @filename: draft
 * @text_content: draft
 * Return: draft
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wrr, i = 0, cr;

	while (*text_content++ != 0)
		i++;
	if (filename == 0)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	wrr = write(fd, text_content - i - 1, i);
	if (wrr == -1)
		return (-1);
	cr = close(fd);
	if (cr == -1)
		return (-1);
	return (1);
}

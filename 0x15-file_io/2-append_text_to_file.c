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

	if (filename == 0)
		return (-1);
	while (*text_content++ != 0)
		i++;
	fd = open(filename, O_WRONLY | O_APPEND);
	wrr = write(fd, text_content - i - 1, i);
	cr = close(fd);
	if (cr == -1 || fd == -1 || wrr == -1)
		return (-1);
	return (1);
}

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
	char *p = text_content;

	while (*p++ != 0)
		i++;
	if (filename == 0)
		return (-1);
	fd = open(filename, O_EXCL);
	if (fd == -1)
	{
		fd = open(filename, O_CREAT | O_RDWR);
		wrr = write(fd, text_content, i);
	}
	if (fd == -1 || wrr == -1)
		return (-1);

	close(fd);
	return (1);
}

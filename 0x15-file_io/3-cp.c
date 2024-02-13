#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - draft
 * @ac: draft
 * @av: draft
 * Return: draft
 */
int main(int ac, char **av)
{

	int fdf, fdt, cf, ct, rr;
	char *c = (char *) malloc(1024 * sizeof(char));

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fdt = open(av[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fdt == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	fdf = open(av[1], O_RDONLY);
	if (fdf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	do {
		rr = read(fdf, c, 1024);
		write(fdt, c, rr);
	} while (rr == 1024);
	cf = close(fdf);
	ct = close(fdt);
	if (ct == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ct);
	if (cf == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ct);
	if (ct == -1 || cf == -1)
		exit(100);
	free(c);
	return (0);
}

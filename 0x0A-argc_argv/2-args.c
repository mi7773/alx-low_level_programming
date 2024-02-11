#include <stdio.h>

/**
 * main - darft
 * @argc: draft
 * @argv: draft
 * Return: draft
 */
int main(int argc, char *argv[])
{
	if (argc < 1)
		return (0);
	main(argc - 1, argv);
	printf("%s\n", *(argv + argc - 1));
	return (0);
}


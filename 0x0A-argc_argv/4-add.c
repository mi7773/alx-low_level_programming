#include <stdio.h>
#include <stdlib.h>

/**
 * main - draft
 * @argc: draft
 * @argv: draft
 * Return: draft
 */
int main(int argc, char **argv)
{
	int i, j, k = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		j = 0;
		while (argv[i][j] != 0)
		{
			if (!(argv[i][j] <= 57 && argv[i][j++] >= 48))
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	while (argc--)
	{
		k += atoi(argv[argc]);
	}
	printf("%d\n", k);
	return (0);
}

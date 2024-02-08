#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - draft
 * @a: draft
 * @size: draft
 */
void print_diagsums(int *a, int size)
{
	int i, j, k = 0, l = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				k += *(a + i + size * j);
			if (i + j == size - 1)
				l += *(a + i * size + j);
		}
	}
	printf("%d, %d\n", k, l);
}

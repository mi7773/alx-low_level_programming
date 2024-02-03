#include "main.h"
#include <stdio.h>

/**
 * print_array - draft
 * @a: draft
 * @n: draft
 */
void print_array(int *a, int n)
{
	while (n--)
	{
		if (n > 0)
			printf("%d, ", *a++);
		else
			printf("%d", *a);
	}
	printf("\n");
}


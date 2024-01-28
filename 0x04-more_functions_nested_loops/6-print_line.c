#include "main.h"

/**
 * print_line - draft
 * @n: draft
 */
void print_line(int n)
{
	int y, z = 47;

	if (n < 0)
		n = 0;
	for (y = 0; y <= n; y++)
	{
		if (y == n)
			z = -38;
		_putchar('0' + z);
	}
}

#include "main.h"

/**
 * print_diagonal - draft
 * @n: draft
 */
void print_diagonal(int n)
{
	int y, z;

	if (n < 0)
	n = 0;
	y = 0;
	do {
		z = y;
		while (y--)
			_putchar(' ');
		y = z;
			if (n > 0)
			_putchar('\\');
		_putchar('\n');
		y++;
	} while (y < n);
}

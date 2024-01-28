#include "main.h"

/**
 * print_square - draft
 * @size: draft
 */
void print_square(int size)
{
	int x, y, z;

	if (size < 0)
		size = 0;
	y = 0;
	do {
		y++;
		for (z = 0; z <= size; z++)
		{
			x = -13;
			if (z == size)
				x = -38;
			_putchar('0' + x);
		}
	} while (y < size);
}

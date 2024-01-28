#include "main.h"

/**
 * print_triangle - draft
 * @size: draft
 */
void print_triangle(int size)
{
	int a, b, c;

	if (size < 0)
		size = 0;
	a = 1;
	do {
		c = size - a;
		if (size > 0)
		{
			while (c--)
				_putchar(' ');
			for (b = 1; b <= a; b++)
				_putchar('#');
		}
		_putchar('\n');
		a++;
	} while (a <= size);
}

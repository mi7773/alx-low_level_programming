#include "main.h"

/**
 * print_alphabet_x10 - draft
 */
void print_alphabet_x10(void)
{
	int n = 97, m = 97, o = 0;

	while (o != 270)
	{
		o++;
		_putchar(n);
		n++;
		if (n > 122)
			n = 10;
		else if (n == 11)
			n = m;
	}
}

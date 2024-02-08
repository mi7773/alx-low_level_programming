#include "main.h"

/**
 * print_binary - draft
 * @n: draft
 */
void print_binary(unsigned long int n)
{
	int o = 0, p;
	unsigned long int m = n;

	do {
		m >>= 1;
		o++;
	} while (m);
	p = o - 1;
	while (o)
	{
		m = n;
		if ((m >> p) & 1)
			_putchar(49);
		else if (((m >> p) & 1) == 0)
			_putchar(48);
		o--;
		p--;
	}
}

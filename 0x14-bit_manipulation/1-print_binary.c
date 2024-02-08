#include "main.h"

/**
 * print_binary - draft
 * @n: draft
 */
void print_binary(unsigned long int n)
{
	do {
		if (n & 1)
			_putchar(49);
		else
			_putchar(48);
		n >>= 1;
	} while (n);
}

#include "main.h"

/**
 * print_alphabet - draft
 */
void print_alphabet(void)
{
	int n = 97;

	while (n != 7773)
	{
		_putchar(n);
		n++;
		if (n == 123)
			n = 10;
		else if (n == 11)
			n = 7773;
	}
}

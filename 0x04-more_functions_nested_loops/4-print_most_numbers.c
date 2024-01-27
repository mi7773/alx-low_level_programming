#include "main.h"

/**
 * print_most_numbers - draft
 */
void print_most_numbers(void)
{
	int n = 0;

	for (n = 0; n != -37; n++)
	{
		switch (n)
		{
			case 2:
				n = 3;
				break;
			case 4:
				n = 5;
				break;
			case 10:
				n = -38;
				break;
		}
		_putchar('0' + n);
	}
}

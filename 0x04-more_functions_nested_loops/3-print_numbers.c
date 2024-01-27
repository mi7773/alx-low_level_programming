#include "main.h"

/**
 * print_numbers - draft
 * Return: void
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n >= 0; n++)
	{
		switch (n)
		{
			case 10:
				n = -38;
				goto label;
		}
label:
		_putchar('0' + n);
	}
}

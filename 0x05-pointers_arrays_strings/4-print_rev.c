#include "main.h"

/**
 * print_rev - draft
 * @s: draft
 */
void print_rev(char *s)
{
	char *h;

	h = s;
	while (*s != 0)
	{
		s++;
	}
	while (s != h)
	{
		_putchar(*s);
		s--;
	}
	_putchar(*h);
	_putchar('\n');
}

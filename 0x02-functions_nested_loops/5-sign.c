#include "main.h"

/**
 * print_sign - draft
 * @n: draft
 *
 * Return: draft
 */
int print_sign(int n)
{
	int s, r;

	if (n == 0)
	{
		s = 48;
		r = 0;
	}
	else if (n < 0)
	{
		s = 45;
		r = -1;
	}
	else
	{
		s = 43;
		r = 1;
	}
	_putchar(s);
	return (r);
}

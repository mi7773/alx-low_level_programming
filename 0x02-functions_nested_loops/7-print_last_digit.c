#include "main.h"

/**
 * print_last_digit - draft
 * @n: draft
 *
 * Return: draft
 */
int print_last_digit(int n)
{
	n %= 10;
	if (n < 0)
		n *= -1;
	_putchar('0' + n);
	return (n);
}

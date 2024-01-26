#include "main.h"

/**
 * print_to_98 - draft
 * @n: draft
 */
void print_to_98(int n)
{
	int a = 0, b, c, d, e;

	while (n != 98 || a == 0)
	{
		if (n > 98 && a > 1)
			n -= 1;
		if (n < 98 && a > 1)
			n += 1;
		c = n;
		b = 1;
		while (n / 10 != 0)
		{
			b++;
			n /= 10;
		}
		d = 1;
		e = b;
		while (--b)
			d *= 10;
		n = c;
		if (n < 0)
		{
			c *= -1;
			_putchar('-');
		}
		while (e >= 1)
		{
			_putchar('0' + c / d);
			c %= d;
			d /= 10;
			a = 2 + e--;
		}
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		else
			_putchar('\n');
	}
}

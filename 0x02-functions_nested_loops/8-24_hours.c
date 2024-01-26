#include "main.h"

/**
 * jack_bauer - draft
 */
void jack_bauer(void)
{
	int a = 0, b, c, d;

	while (a != 3)
	{
		b = 0;
		while (b != 10)
		{
			if ((a == 2 && b <= 3) || a < 2)
			{
				c = 0;
				while (c != 6)
				{
					d = 0;
					while (d != 10)
					{
						_putchar(a + '0');
						_putchar(b + '0');
						_putchar(10 + '0');
						_putchar(c + '0');
						_putchar(d + '0');
						_putchar(-38 + '0');
						++d;
					}
					c++;
				}
			}
			b++;
		}
		a++;
	}
}


#include "main.h"

/**
 * times_table - draft
 */
void times_table(void)
{
	int a = 0, b, c, d;

	while (a != 10)
	{
		b = 0;
		while (b != 10)
		{
			c = 0;
			while (c != 4)
			{
				if (a * b >= 10)
				{
					if (c == 0)
						d = -16;
					if (c == 1)
						d = (a * b) / 10;
					if (c == 2)
						d = (a * b) % 10;
				}
				else
				{
					if (c == 0)
						d = -16;
					if (c == 1)
						d = -16;
					if (c == 2)
						d = (a * b) % 10;
				}
				if (c == 3 && b == 9)
					d = -1 * '&';
				else if (c == 3)
					d = -4;
				if (b != 0 || (b == 0 && c > 1))
					_putchar(d + '0');
				c++;
			}
			b++;
		}
		a++;
	}
}

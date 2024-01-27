#include "main.h"

/**
 * more_numbers - draft
 */
void more_numbers(void)
{
	int a, b, c, d;

	for (a = 0; a <= 10; a++)
	{
		for (b = 0; b <= 15; b++)
		{
			c = b;
			d = 2;
			while (d--)
			{
				if ((b / 10 != 0) && b < 15)
				{
					if (d == 1)
						b = c / 10;
					else
						b = c % 10;
				}
				else if (d == 0)
					break;
				if (b == 15)
					b = -38;
				_putchar('0' + b);
				if (c >= 10)
					b = c;
				else if (c == -38)
					b = 15;
			}
		}
	}
}

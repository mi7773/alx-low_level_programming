#include "main.h"

/**
 * more_numbers - draft
 */
void more_numbers(void)
{
	int a, b;

	for (a = 1; a <= 10; a++)
	{
		for (b = 0; b <= 15; b++)
		{
			if (b < 15)
			{
				if (b / 10 != 0)
				{
					_putchar((b / 10) + '0');
				}
					_putchar((b % 10) + '0');
			}
			else
				_putchar('0' - 38);
		}
	}
}

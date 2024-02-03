#include "main.h"

/**
 * puts_half - draft
 * @str: draft
 */
void puts_half(char *str)
{
	char *s = str;
	int c = 1;

	while (*++s != 0)
		c++;
	if (c % 2 == 0)
	{
		c /= 2;
		str += c;
	}
		
	else
	{
		c = (c - 1) / 2;
		str += c;
	}
	while (c)
	{
		_putchar(*str);
		c--;
		str++;
	}
	_putchar('\n');
}

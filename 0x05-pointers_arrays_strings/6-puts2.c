#include "main.h"

/**
 * puts2 - draft
 * @str: draft
 */
void puts2(char *str)
{
	while (*str != 0)
	{
		_putchar(*str);
		str = str + 2;
		if (*str == 0)
			_putchar('\n');
	}
}

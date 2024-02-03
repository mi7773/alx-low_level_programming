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
		if (*(str + 1) == 0)
			str++;
		else
			str = str + 2;
	}
	_putchar('\n');

}

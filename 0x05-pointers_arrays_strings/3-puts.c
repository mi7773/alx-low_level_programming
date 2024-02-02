#include "main.h"

/**
 * _puts - draft
 * @str: draft
 * Return: Nothing.
 */
void _puts(char *str)
{
	while (*str != 0)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

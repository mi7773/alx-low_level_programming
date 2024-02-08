#include "main.h"

/**
 * get_bit - draft
 * @n: draft
 * @index: draft
 * Return: draft
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index < 0)
		return (-1);
	n >>= index;
	if (n & 1)
		return (1);
	else if ((n & 1) == 0)
		return (0);
	else
		return (-1);
}

#include "main.h"

/**
 * set_bit - draft
 * @n: draft
 * @index: draft
 * Return: draft
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int i = 1;

	if (index > 32)
		return (-1);
	i <<= index;
	*n |= i;
	return (1);
}

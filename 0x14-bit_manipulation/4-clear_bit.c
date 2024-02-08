#include "main.h"

/**
 * clear_bit - draft
 * @n: draft
 * @index: draft
 * Return: draft
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int i = 1, o = 0;
	unsigned long int m = n;

	do {
		o++;
		m >>= 1;
	} while (m);
	if (index > 32 || index > o)
		return (-1);
	i <<= index;
	if ((*n >> index) & 1)
		*n ^= i;
	else
		*n &= i;
	return (1);
}

#include "main.h"

/**
 * flip_bits - draft
 * @n: draft
 * @m: draft
 * Return: draft
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;

	while (n || m)
	{
		if ((n & 1) != (m & 1))
			i++;
		n >>= 1;
		m >>= 1;
	}
	return (i);
}

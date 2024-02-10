#include "main.h"

/**
 * binary_to_uint - draft
 * @b: draft
 * Return: draft
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int r = 0;
	int r0 = 1;
	const char *z = b;
	int c = 0;
	int i;

	if (b == 0)
		return (0);
	while (*b != '\0')
	{
		b++;
	}
	while (--b >= z)
	{
		r0 = 1;
		if (*b == 49)
		{
			for (i = 0; i < c; i++)
				r0 *= 2;
		}
		else if (*b == 48)
			r0 = 0;
		else
			return (0);
		r += r0;
		c++;
	}
	return (r);
}

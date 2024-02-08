#include "main.h"

/**
 * binary_to_uint - draft
 * @b: draft
 * Return: draft
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int r = 0;
	float a = .5;
	int c = 0;
	const char *z = b;

	if (b == 0)
		return (0);
	while (*b != '\0')
	{
		b++;
		c++;
		a *= 2;
	}
	b = z;
	while (*b != '\0')
	{
		if (*b == '0' || *b == '1')
			r += (unsigned int) (*b - 48) * a;
		else
			return (0);
		b++;
		a /= 2;
	}
	return (r);
}

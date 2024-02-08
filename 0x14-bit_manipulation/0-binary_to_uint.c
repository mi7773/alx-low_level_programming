#include "main.h"
#include "stdio.h"

/**
 * binary_to_uint - draft
 * @b: draft
 * Return: draft
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int r = 0;
	int a = 1;
	int c = 1;

	if (b == NULL)
		return (0);
	while (*++b != '\0')
	{
		c++;
		a *= 2;
	}
	b = b - c;
	while (*b != '\0')
	{
		if (*b == '0' || *b == '1')
			r += (*b - 48) * a;
		else
			return (0);
		b++;
		a /= 2;
	}
	return (r);
}

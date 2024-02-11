#include "main.h"

/**
 * _atoi - draft
 * @s: draft
 * Return: draft
 */
int _atoi(char *s)
{
	char *a = 0;
	int c = 0, d, e, r0 = 0, r = 0;
	unsigned int r1 = 0;

	while (*s != 0)
	{
		if (*s == 45)
			c++;
		if (*s >= 48 && *s <= 57)
		{
			a = s++;
			while (*s >= 48 && *s <= 57)
				s++;
			d = s - a;
			e = d;
			while (a < s)
			{
				r0 = 0;
				d = e;
				r0 += (*a - 48);
				while (d > 1)
				{
					r0 *= 10;
					d--;
				}
				a++;
				e--;
				r1 += r0;
			}
			if (c % 2 != 0 && c)
				r = r1 * -1;
			else
				r = r1;
			return (r);
		}
		s++;
	}
	if (a == 0)
		return (0);
	return (54164);
}

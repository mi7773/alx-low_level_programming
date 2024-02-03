#include "main.h"

void rev_string0(char *s, int c);

/**
 * rev_string - draft
 * @s: draft
 */
void rev_string(char *s)
{
	int c = 1;

	while (*++s != 0)
	{
		c++;
	}
	s--;
	rev_string0(s, c);
}

/**
 * rev_string0 - draft
 * @s: draft
 * @c: draft
 */
void rev_string0(char *s, int c)
{
	char c0[5000];
	int c1 = 0;

	while (c--)
	{
		c0[c1] = *s;
		s--;
		c1++;
	}
	s++;
	c++;
	while (c1--)
	{
		*s = c0[c];
		s++;
		c++;
	}
}

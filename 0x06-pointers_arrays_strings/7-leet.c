#include "main.h"

/**
 * leet - draft
 * @a: draft
 * Return: draft
 */
char *leet(char *a)
{
	char new[] = {52, 51, 48, 55, 49};
	char old[] = {65, 69, 79, 84, 76};
	char *r = a;
	int c;

	while (*r != 0)
	{
		c = 0;
		while (c < 5)
		{
			if (*r == old[c] || *r == old[c] + 32)
			{
				*r = new[c];
				break;
			}
			c++;
		}
		r++;
	}
	return (a);
}

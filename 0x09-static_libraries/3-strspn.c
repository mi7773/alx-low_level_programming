#include "main.h"

/**
 * _strspn - draft
 * @s: draft
 * @accept: draft
 * Return: draft
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int r = 0;
	int c = 1;
	char *reset = accept;

	while (*accept != 0)
	{
		if (*accept == *s)
		{
			while (*s != 0 && c)
			{
				accept = reset;
				while (*accept != 0)
				{
					c = 0;
					if (*s == *accept)
					{
						c = 1;
						r++;
						break;
					}
					accept++;
				}
				s++;
			}
		}
		accept++;
	}
	return (r);
}

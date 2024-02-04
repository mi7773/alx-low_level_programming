#include "main.h"

/**
 * cap_string - draft
 * @a: draft
 * Return: draft
 */
char *cap_string(char *a)
{
	int s[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
	char *r = a;
	int i = sizeof(s) / sizeof(int);
	int ri;
	
	while (*a != 0)
	{
		if (*a > 96 && *a < 123)
		{
			if (*a == *r)
			{
				*a -= 32;
				continue;
			}
			ri = 0;	
			while (ri < i)
			{
				if (s[ri] == *(a - 1))
				{
					*a -= 32;
					break;
				}
				ri++;
			}
		}
		a++;
	}
	return (r);
}

#include "main.h"

/**
 * _strpbrk - draft
 * @s: draft
 * @accept: draft
 * Return: draft
 */
char *_strpbrk(char *s, char *accept)
{
	char *reset = accept;
	int c = 0;

	while (*s != 0)
	{
		accept = reset;
		while (*accept != 0)
		{
			if (*s == *accept)
			{
				c = 1;
				break;
			}
			accept++;
		}
		if (c == 1)
			break;
		s++;
	}
	return (s);
}

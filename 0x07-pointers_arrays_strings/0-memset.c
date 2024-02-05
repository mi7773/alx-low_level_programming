#include "main.h"
#include <stdio.h>
/**
 * _memset - draft
 * @s: draft
 * @b: draft
 * @n: draft
 * Return: draft
 */
char *_memset(char *s, char b, unsigned int n)
{
	char **m = &s;
	unsigned int c = n;

	while (n)
	{
		**m = b;
		*m = *m + 1;
		n--;
	}
	s = s - c;
	return (s);
}

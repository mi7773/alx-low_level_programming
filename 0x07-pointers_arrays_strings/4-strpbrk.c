#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - draft
 * @s: draft
 * @accept: draft
 * Return: draft
 */
char *_strpbrk(char *s, char *accept)
{
	char *reset = accept;

	while (*s != 0)
	{
		accept = reset;
		while (*accept != 0)
		{
			if (*s == *accept)
				return (s);
			accept++;
		}
		s++;
	}
	return (NULL);
}

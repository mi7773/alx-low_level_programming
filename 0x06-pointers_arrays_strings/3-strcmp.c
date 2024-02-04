#include "main.h"

/**
 * _strcmp - draft
 * @s1: draft
 * @s2: draft
 * Return: draft
 */
int _strcmp(char *s1, char *s2)
{
	int c1 = 0, c2 = 0;

	while (*s1++ != 0)
		c1++;
	while (*s2++ != 0)
		c2++;
	if (c1 == c2)
		return (0);
	else if (c1 > c2)
		return (15);
	else
		return (-15);
}

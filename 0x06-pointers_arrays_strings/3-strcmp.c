#include "main.h"

/**
 * _strcmp - draft
 * @s1: draft
 * @s2: draft
 * Return: draft
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != 0)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 - *s2);
}

#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * str_concat - draft
 * @s1: draft
 * @s2: draft
 * Return: draft
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	char *r, *p;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	r = s1;
	while (*r++ != 0)
		i++;
	r = s2;
	while (*r++ != 0)
		i++;
	p = (char *) malloc(sizeof(char) * ++i);
	if (p == 0)
		return (0);
	r = p;
	while (*s1 != 0)
		*r++ = *s1++;
	while (*s2 != 0)
		*r++ = *s2++;
	*r = 0;
	return (p);
}

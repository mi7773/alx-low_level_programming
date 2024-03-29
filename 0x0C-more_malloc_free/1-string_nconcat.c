#include <stdlib.h>
#include "main.h"

/**
 * findl - draft
 * @str: draft
 * Return: draft
 */
unsigned int findl(char *str)
{
	unsigned int i;

	i = 0;
	while (str && str[i])
	{
		i++;
	}

	return (i);
}

/**
 * myswap - draft
 * @de: draft
 * @so: draft
 * @n: draft
 * Return: draft
 */
void myswap(char *de, char *so, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (so && so[i])
	{
		if (i == n)
		{
			break;
		}
		de[i] = so[i];
		i++;
	}
}

/**
 * string_nconcat - draft
 * @s1: draft
 * @s2: draft
 * @n: draft
 * Return: draft
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *r;

	i = findl(s1);
	j = findl(s2);
	if (n > j)
	{
		n = j;
	}
	r = malloc((i + n + 1) * sizeof(*r));
	if (r == 0)
	{
		return (0);
	}
	myswap(&r[0], s1, i);
	myswap(&r[i], s2, n);
	r[i + n] = 0;

	return (r);
}

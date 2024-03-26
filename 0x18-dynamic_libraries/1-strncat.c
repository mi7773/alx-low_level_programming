#include "main.h"

/**
 * _strncat - draft
 * @dest: draft
 * @src: draft
 * @n: draft
 * Return: draft
 */
char *_strncat(char *dest, char *src, int n)
{
	char *pd = dest;
	char *ps = src;
	int c = 0;

	while (*src++ != 0)
		c++;
	if (n > c)
		n = c;
	while (*dest != 0)
		dest++;
	while (n--)
	{
		*dest = *ps;
		dest++;
		ps++;
	}
	*dest = 0;
	return (pd);
}

#include "main.h"

/**
 * _strncpy - draft
 * @dest: draft
 * @src: draft
 * @n: draft
 * Return: draft
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *pd = dest;
	char *ps = src;
	int c = 1;

	while (*ps++ != 0)
		c++;
	while (n)
	{
		if (c <= 0)
			*dest = 0;
		else
			*dest = *src;
		src++;
		dest++;
		n--;
		c--;
	}
	return (pd);
}

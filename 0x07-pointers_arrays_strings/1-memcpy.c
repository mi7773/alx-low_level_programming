#include "main.h"

/**
 * _memcpy - draft
 * @dest: draft
 * @src: draft
 * @n: draft
 * Return: draft
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c = n;

	while (n)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	dest = dest - c;
	return (dest);
}

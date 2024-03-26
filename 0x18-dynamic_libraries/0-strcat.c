#include "main.h"

/**
 * _strcat - draft
 * @dest: draft
 * @src: draft
 * Return: draft
 */
char *_strcat(char *dest, char *src)
{
	char *r = dest;

	while (*dest != 0)
		dest++;
	while (*src != 0)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = 0;
	return (r);
}


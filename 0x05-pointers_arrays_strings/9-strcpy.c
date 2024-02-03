#include "main.h"

/**
 * _strcpy - draft
 *
 * @dest: draft
 * @src: draft
 *
 * Return: draft
 */
char *_strcpy(char *dest, char *src)
{
	char *r = dest;
	while (*src != 0)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = 0;
	return (r);
}

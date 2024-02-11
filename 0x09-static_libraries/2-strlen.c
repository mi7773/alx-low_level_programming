#include "main.h"

/**
 * _strlen - draft
 * @s: draft
 * Return: draft
 */
int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		s++;
		c++;
	}
	return (c);
}

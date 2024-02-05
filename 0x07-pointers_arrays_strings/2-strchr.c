#include "main.h"

/**
 * _strchr - draft
 * @s: draft
 * @c: draft
 * Return: draft
 */
char *_strchr(char *s, char c)
{
	while (*s++ != 0)
	{
		if (*s == c)
			break;
	}
	return (0);
}

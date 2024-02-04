#include "main.h"

/**
 * string_toupper - draft
 * @a: draft
 * Return: draft
 */
char *string_toupper(char *a)
{
	char *r = a;

	while (*a != 0)
	{
		if (*a > 96 && *a < 123)
		{
			*a -= 32;
		}
		a++;
	}
	return (r);
}

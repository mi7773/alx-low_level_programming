#include <stdlib.h>
#include "main.h"

/**
 * _strdup - draft
 * @str: draft
 * Return: draft
 */
char *_strdup(char *str)
{
	char *r = str;
	int i = 0;

	if (str == 0)
		return (0);
	while (*r++ != 0)
		i++;
	r = (char *) malloc(i * sizeof(char));
	if (r == 0)
		return (0);
	while (*str != 0)
		*r++ = *str++;
	*r = 0;
	return (r - i);
}

#include <stdlib.h>
#include "main.h"

/**
 * create_array - draft
 * @size: draft
 * @c: draft
 * Return: draft
 */
char *create_array(unsigned int size, char c)
{
	int i = 0;
	char *r = (char *) malloc(sizeof(char) * size);

	if (size == 0)
		return (0);
	if (r == 0)
		return (0);
	i = 0;
	while (i++ < (int) size)
		*r++ = c;
	return (r - i + 1);
}

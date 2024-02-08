#include "main.h"

/**
 * _strstr - draft
 * @haystack: draft
 * @needle: draft
 * Return: draft
 */
char *_strstr(char *haystack, char *needle)
{
	char *r, *r0;

	if (*needle == '\0')
		return (0);
	while (*haystack != 0)
	{
		r = needle;
		if (*haystack == *r)
		{
			r0 = haystack;
			while (*haystack == *r && *r != '\0')
			{
				r++;
				haystack++;
			}
			if (*r == '\0')
				return (r0);
			haystack--;
		}
		haystack++;
	}
	return (0);
}

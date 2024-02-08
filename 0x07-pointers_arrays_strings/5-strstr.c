#include "main.h"

/**
 * _strstr - draft
 * @haystack: draft
 * @needle: draft
 * Return: draft
 */
char *_strstr(char *haystack, char *needle)
{
	char *r = needle, *r0;
	int c = 0;

	while (*r != '\0')
	{
		r++;
		c++;
	}
	if (c <= 0)
		return (haystack);
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

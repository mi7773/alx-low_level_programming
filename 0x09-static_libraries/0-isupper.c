#include "main.h"

/**
 * _isupper - draft
 *
 * @c: draft
 * Return: draft
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		goto label1;
	else
		goto label2;

label1:
		return (1);
label2:
		return (0);
}

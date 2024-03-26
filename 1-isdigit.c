#include "main.h"

/**
 * _isdigit - draft
 *
 * @c: draft
 * Return: draft
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		goto label1;
	else
		goto label2;

label1:
		return (1);
label2:
		return (0);
}

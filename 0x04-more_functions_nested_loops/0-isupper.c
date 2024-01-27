#include "main.h"

/**
 * _isupper - draft
 *
 * @c: draft
 * Return: draft
 */
int _isupper(int c)
{
	int n;

	for (n = 65; n <= 90; n++)
	{
		if (c == n)
			goto label1;
		else
			goto label2;
	}
label1:
		return (1);
label2:
		return (0);
}

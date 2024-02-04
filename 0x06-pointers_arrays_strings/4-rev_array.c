#include "main.h"

/**
 * reverse_array - draft
 * @a: draft
 * @n: draft
 */
void reverse_array(int *a, int n)
{
	int i = 0, s;

	n = n - 1;
	while (i < n)
	{
		s = a[i];
		a[i] = a[n];
		a[n] = s;
		i++;
		n--;
	}
}

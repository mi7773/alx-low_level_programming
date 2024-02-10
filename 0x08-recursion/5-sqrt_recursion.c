#include "main.h"

int _sqrt_recursion0(int n, int i);

/**
 * _sqrt_recursion - draft
 * @n: draft
 * Return: draft
 */
int _sqrt_recursion(int n)
{
	int i = 1;
	if (n <= 0)
		return (-1);
	return (_sqrt_recursion0(n, i));
}

/**
 * _sqrt_recursion0 - draft
 * @n:draft
 * @i: draft
 * Return: draft
 */
int _sqrt_recursion0(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (_sqrt_recursion0(n, ++i));
}

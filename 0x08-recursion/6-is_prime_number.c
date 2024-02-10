#include "main.h"

int is_prime_number0(int n, int m);

/**
 * is_prime_number - dratf
 * @n: draft
 * Return: draft
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_number0(n, n - 1));
}

/**
 * is_prime_number0 - draft
 * @n; draft
 * @m: draft
 * Return: draft
 */
int is_prime_number0(int n, int m)
{
	if (n % m == 0)
		return (0);
	else if (n % m != 0 && m <= 2)
		return (1);
	else
		return (is_prime_number0(n, --m));
}

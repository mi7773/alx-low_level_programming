#include <stdio.h>

/**
 * main - draft
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n = 122;

	while (n >= 96)
	{
		if (n == 96)
			n = 10;
		putchar(n);
		--n;
	}
	return (0);
}

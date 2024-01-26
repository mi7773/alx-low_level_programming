#include <stdio.h>

/**
 * main - draft
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n = 48;

	while (n != 11)
	{
		if (n == 58)
			n = 97;
		else if (n == 103)
			n = 10;
		putchar(n);
		++n;
	}
	return (0);
}

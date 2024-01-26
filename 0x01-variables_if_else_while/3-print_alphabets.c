#include <stdio.h>

/**
 * main - draft
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 97;

	while (n != 91)
	{
		if (n == 123)
			n = 65;
		putchar(n);
		++n;
		n--;
		n++;
	}
	putchar(10);
	return (0);
}

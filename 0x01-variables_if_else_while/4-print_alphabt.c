#include <stdio.h>

/**
 * main - draft
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 97;

	while (n != 123)
	{
		if (n == 101)
			n = 102;
		else if (n == 113)
			n = 114;
		putchar(n);
		n++;
	}
	putchar(10);
	return (0);
}

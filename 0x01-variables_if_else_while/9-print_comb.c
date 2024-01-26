#include <stdio.h>

/**
 * main - draft
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 48, m = 0;

	while (n != 7773)
	{
		putchar(n);
		if  (n >= 48 && n <= 56)
		{
			m = n;
			n = 44;
		}
		else if (n == 44)
			n = 32;
		else if (n == 32)
			n = m + 1;
		else if (n == 57)
			n = 10;
		else
			n = 7773;
	}
	return (0);
}

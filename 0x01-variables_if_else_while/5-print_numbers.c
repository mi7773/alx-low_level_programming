#include <stdio.h>

/**
 * main - draft
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n + '0');
		n++;
	}
	putchar(10);
	return (0);
}

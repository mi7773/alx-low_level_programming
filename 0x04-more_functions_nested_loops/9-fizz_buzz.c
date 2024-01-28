#include "main.h"
#include <stdio.h>

/**
 * main - draft
 * Return: draft
 */
int main(void)
{
	int y;

	for (y = 1; y < 101; y++)
	{
		if (y % 3 == 0 && y % 5 == 0)
			printf("FizzBuzz");
		else if (y % 3 == 0)
			printf("Fizz");
		else if (y % 5 == 0)
			printf("Buzz");
		else
			printf("%d", y);
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

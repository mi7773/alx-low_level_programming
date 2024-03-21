#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - draft
 * @h: draft
 *
 * Return: draft
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;
	const dlistint_t *t = h;

	while (t)
	{
		printf("%d\n", t->n);
		n++;
		h = h->next;
		t = h;
	}
	return (n);
}

#include <stddef.h>
#include "lists.h"

/**
 * dlistint_len - draft
 * @h: draft
 * 
 * Return: draft
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;
	const dlistint_t *t = h;

	while (t)
	{
		h = h->next;
		t = h;
		n++;
	}
	return (n);
}

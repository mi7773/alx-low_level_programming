#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - draft
 * @head: draft
 * @n: draft
 *
 * Return: draft
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *t = NULL;

	t = malloc(sizeof(dlistint_t));
	if (t == NULL)
	{
		return (NULL);
	}
	t->n = n;
	t->next = NULL;
	if (*head != NULL)
	{
		dlistint_t *p = *head;

		while (p->next)
		{
			p = p->next;
		}
		t->prev = p;
		p->next = t;
	}
	else
	{
		t->prev = NULL;
		*head = t;
	}
	return (t);
}

#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - draft
 * @head: draft
 * @n: draft
 *
 * Return: draft
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *t = NULL;

	t = malloc(sizeof(dlistint_t));
	if (t == NULL)
	{
		return (NULL);
	}
	t->n = n;
	t->prev = NULL;
	t->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = t;
	}
	*head = t;
	return (*head);
}

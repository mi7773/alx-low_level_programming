#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - draft
 * @head: draft
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *p = head;

	while (p)
	{
		p = p->next;
		free(head);
		head = p;
	}
}

#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a list
 * @head: the head of the list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *p = head;

	if (p == NULL)
		return;
	while (p != NULL)
	{
		listint_t *next = p->next;

		free(p);
		p = next;
	}
}

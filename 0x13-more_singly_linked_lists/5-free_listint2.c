#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: the head of the list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *p = *head;
	listint_t *next;

	if (head == NULL)
		return;
	if (p == NULL)
		return;
	while (p != NULL)
	{
		next = p->next;
		free(p);
		p = next;
	}
	*head = NULL;
}

#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - reverse a list
 * @head: the head of the list
 *
 * Return: pointer to the first node of the list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *p;
	listint_t *prev = NULL;

	if (head == NULL && *head == NULL)
		return (NULL);

	p = *head;
	while (p != NULL)
	{
		listint_t *next = p->next;

		p->next = prev;
		prev = p;
		p = next;
	}

	*head = prev;
	return (prev);
}

#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * add_dnodeint_end - adds node at the end of the list
 * @head: the head of the list
 * @n: the value of the node
 *
 * Return: address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *h;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		h = *head;
		while (h->next != NULL)
		{
			h = h->next;
		}
		h->next = new;
		new->prev = h;
	}
	return (new);
}

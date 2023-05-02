#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at given position
 * @head: the haed of the list
 * @idx: the index of the new node
 * @n: the data of the new node
 *
 * Return: the adress of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *p;
	listint_t *new = malloc(sizeof(listint_t));
	unsigned int len = 0, i;

	if (new == NULL || head == NULL)
		return (NULL);

	if (idx == 0)
	{
		new->n = n;
		if (*head == NULL)
		{
			new->next = NULL;
			*head = new;
		}
		else
		{
			new->next = *head;
			*head = new;
		}
		return (*head);
	}
	p = *head;
	while (p != NULL)
	{
		p = p->next;
		len++;
	}
	if (idx >= len)
	{
		free(new);
		return (NULL);
	}

	p = *head;
	for (i = 0; i < idx - 1; i++)
	{
		p = p->next;
	}
	new->next = p->next;
	p->next = new;
	new->n = n;
	return (*head);
}

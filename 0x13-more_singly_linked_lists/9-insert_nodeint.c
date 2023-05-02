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
	listint_t *new;
	unsigned int len = 1;

	if (head)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		if (idx == 0)
		{
			new->next = *head;
			*head = new;
			return (new);
		}
		p = *head;
		while (p != NULL)
		{
			if (len == idx)
			{
				new->next = p->next;
				p->next = new;
				return (new);
			}
			p = p->next;
			len++;
		}
		if (idx > len)
		{
			return (NULL);
		}
	}
	return (NULL);
}

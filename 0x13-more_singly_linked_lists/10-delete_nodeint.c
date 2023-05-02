#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - delate a node at given position
 * @head: the haed of the list
 * @index: the index of the new node
 *
 * Return: 1 if true , -1 if false
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p;
	listint_t *next;
	unsigned int len = 0;

	if (head != NULL && *head != NULL)
	{
		p = *head;
		if (index == 0)
		{
			*head = p->next;
			free(p);
			return (1);
		}
		while (p != NULL)
		{
			len++;
			if (len == index)
			{
				next = p->next;
				p->next = next->next;
				free(next);
				return (1);
			}
			p = p->next;
		}
		if (index > len)
		{
			return (-1);
		}
	}
	return (-1);
}

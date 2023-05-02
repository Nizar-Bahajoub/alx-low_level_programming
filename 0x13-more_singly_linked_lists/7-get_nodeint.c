#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: the head of the list
 * @index: the index of the node
 *
 * Return: the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *p;
	unsigned int  len = 0, i;

	if (head == NULL)
		return (NULL);

	p = head;
	while (p != NULL)
	{
		p = p->next;
		len++;
	}
	if (index >= len)
		return (NULL);
	p = head;
	for (i = 0; i < index; i++)
	{
		p = p->next;
	}
	return (p);
}

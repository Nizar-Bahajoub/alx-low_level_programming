#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - sum all the data (n) of the list
 * @head: the head of the list
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	listint_t *p;
	int s = 0;

	if (head == NULL)
		return (0);

	p = head;
	while (p != NULL)
	{
		s += p->n;
		p = p->next;
	}
	return (s);
}

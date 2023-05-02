#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: the head node data
 */

int pop_listint(listint_t **head)
{
	listint_t *p = *head;
	listint_t *next;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	n = p->n;
	next = p->next;
	free(p);
	*head = next;
	return (n);
}

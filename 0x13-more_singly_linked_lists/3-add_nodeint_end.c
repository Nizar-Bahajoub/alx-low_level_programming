#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - add node tothe beginning of the list
 * @head: the head of the list
 * @n: the content of the node
 *
 * Return: address of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p = *head;
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		return (*head);
	}
	new->next = NULL;
	while (p->next != NULL)
		p = p->next;
	p->next = new;
	return (*head);
}

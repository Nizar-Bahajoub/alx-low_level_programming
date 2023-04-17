#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - print a struct
 * @d: the struct to be printed
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	struct dog c;
	c = *d;
	if (d == NULL)
		return;
	if (d->name == NULL)
		c.name = "nil";
	if (d->owner == NULL)
		c.owner = "nil";
	printf("Name: %s\n", c.name);
	printf("Age: %.6f\n", c.age);
	printf("Owner: %s\n", c.owner);
}

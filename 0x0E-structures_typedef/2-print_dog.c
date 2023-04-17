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
	if (d == NULL)
		return;
	printf("Name: %s\n", d->name);
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner);
}

#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize a variable dog
 * @d: dog struct
 * @name : dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->owner = owner;
	d->age = age;
}

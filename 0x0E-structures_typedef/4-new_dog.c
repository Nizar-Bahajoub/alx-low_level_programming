#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create a new dog
 * @name: name of the dog
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *t;

	t->name = name;
	t->age = age;
	t->owner = owner;
	return (t);
}

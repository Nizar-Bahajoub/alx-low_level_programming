#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - lenth of str
 * @str: string
 *
 * Return: lenth of str
 */

int _strlen(char *str)
{
	int c = 0, i;

	for (i = 0; str[i] != '\0'; i++)
		c++;
	return (c);
}

/**
 * _strcpy - copy string to dest
 *
 * @dest: input
 * @src:  input
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, len = 0;

	while (src[len] != '\0')
		len++;
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

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
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);
	t = malloc(sizeof(dog_t));
	if (t == NULL)
		return (NULL);
	t->name = malloc(sizeof(char) * (len1 + 1));
	if (t->name == NULL)
	{
		free(t);
		return (NULL);
	}
	t->owner = malloc(sizeof(char) * (len2 + 1));
	if (t->owner == NULL)
	{
		free(t);
		free(t->name);
		return (NULL);
	}
	_strcpy(t->name, name);
	_strcpy(t->owner, owner);
	t->age = age;

	return (t);
}

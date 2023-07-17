#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * key_index - functions gives a key's index
 * @key: the key
 * @size: the size of the array
 *
 * Return: the index at wich the key/value pair should be stored in the array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	hash = hash_djb2(key);
	return (hash % size);
}

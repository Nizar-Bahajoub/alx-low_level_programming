#include <stdio.h>
#include "lists.h"

/**
 * print - print a string before the main
 *
 * Return: nothing
 */

void __attribute__((constructor)) print(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}

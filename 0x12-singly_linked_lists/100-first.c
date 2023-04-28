#include <stdio.h>
#include "lists.h"

/**
 * print - print a string before the main
 *
 * Return: nothing
 */

void __attribute__((constructor)) print()
{
	printf("You\'re beat! and yet, you must allow,\nI bore my
			 house upon my back!\n");
}

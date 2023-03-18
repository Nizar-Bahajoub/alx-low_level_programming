#include <stdio.h>

/** 
 * main - printing the alphabet
 *
 * Return: 0
 */

int main(void)
{
	char i = 'a';
	while (i <= 'z' && i != 'q' && i !='e')
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

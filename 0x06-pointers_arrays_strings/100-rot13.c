#include "main.h"

/**
 * *rot13 - encode a string using rot13
 * @str: string encodes
 *
 * Return: str
 */

char *rot13(char *str)
{
	int i = 0, j = 0;
	char s1[] = "aAbBcCdDeEfFgGhHiIjJkKlLmM";
	char s2[] = "nNoOpPqQrRsStTuUvVwWxXyYzZ";

	for (; str[i] != '\0'; i++)
	{
		for (; j < 26; j++)
		{
			if (str[i] == s1[j])
			{
				str[i] = s2[j];
			}
		}
	}
	return (str);
}

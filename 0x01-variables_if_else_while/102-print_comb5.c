#include <stdio.h>

/**
 * main - print number 2
 *
 * Return: 0
 */

int main(void)
{
	int i, k, l, m, op1, op2;

	i = k = l = m = 48;
	while (m < 58)
	{
		l = 48;
		while (l < 58)
		{
			k = 48;
			while (k < 58)
			{
				i = 48;
				while (i < 58)
				{
					op1 = (m * 10) + l;
					op2 = (k * 10) + i;
					if (op1 < op2)
					{
						putchar(m);
						putchar(l);
						putchar(' ');
						putchar(k);
						putchar(i);
						if (m == 57 && l == 56 && k == 57 && i == 57){
							break;
						}
						putchar(',');
						putchar(' ');
					}
					i++;
				}
				k++;
			}
			l++;
		}
		m++;
	}
	putchar('\n');
	return (0);
}

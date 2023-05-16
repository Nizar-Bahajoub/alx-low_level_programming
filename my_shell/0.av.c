#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int i;

	i = 0;
	while(av[i] != NULL)
	{
		i++;
	}
	printf("%d\n", i);
	return (0);
}

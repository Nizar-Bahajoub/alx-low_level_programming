#include <stdio.h>
#include <stdlib.h>

int main(int a, char **av)
{
	char *buf = NULL;
	size_t n = 0;
	ssize_t read;

	printf("$ ");
	read = getline(&buf, &n, stdin);

	if (read == -1)
	{
		return (0);
	}
	else
		printf("%s", buf);

	return (0);
}

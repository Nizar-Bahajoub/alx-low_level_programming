#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INPUT_MAX 1000

int main()
{
	char str[INPUT_MAX];
	const char deli[] = " ,.!-";
	char *token;

	printf("$ ");
	fgets(str, sizeof(str), stdin);

	token = strtok(str, " ");
	while (token != NULL)
	{
		printf("Token: %s\n", token);
		token = strtok(NULL, " ");
	}
}

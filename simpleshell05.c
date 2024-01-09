#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - Entry point of the shell program
 *
 * Return: Always 0
 */
int main(void)
{
	char **environ = NULL;
	int i = 0;

	if (environ == NULL)
	{
		printf("Error: Environ variable is NULL.\n");
		return (1);
	}

	while (environ[i] != NULL)
	{
		printf("%s\n", environ[i]);
		i++;
	}

	return (0);
}

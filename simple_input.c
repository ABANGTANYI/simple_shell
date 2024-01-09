#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_INPUT_LENGTH 256

/**
 * main - Entry point of the program
 *
 * Description: This program acts as a simple Linux terminal,
 * accepting user input and executing cammands
 * until the user enters "exit" or "quit".
 *
 * Return: Always 0 (succes)
 */

int main(void)
{
	char input[MAX_INPUT_LENGTH];

	while (1)
	{
		printf("$ ");

		if (fgets(input, sizeof(input), stdin) == NULL)
		{
			printf("Error reading input.\n");
			break;
		}

		input[strcspn(input, "\n")] = '\0';

		if (strcmp(input, "exit") == 0 || strcmp(input, "quit") == 0)
		{
			break;
		}

		if (system(input) == -1)
		{
			printf("Error executing command. \n");
		}

	}
	return (0);

}

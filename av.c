#include <stdio.h>

/**
 * main - Entry point of the program
 * @ac: The number of command line arguments
 * @av: An array of strings containing the arguments
 *
 * Description: This program prints all the command line arguments
 *              passed to it.
 *
 * Return: Always 0 (success)
 */
int main(int ac, char **av)
{
	int i = 1;

	while (av[i] != NULL)
	{
		printf("%s\n", av[i]);
		i++;
	}

	return (0);
}

#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the PID of the parent process. 
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("Parent PID: %d\n", getppid());
	return (0);
}

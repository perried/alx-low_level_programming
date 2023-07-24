#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints all arguments it receives
 * @argc: arguments count
 * @argv: arguments vector
 * Return: Exit status
 */

int main(int argc, char *argv[])
{
	int counter;

	for (counter = 0; counter < argc; counter++)
	{
		printf("%s\n", argv[counter]);
	}

	return (0);
}

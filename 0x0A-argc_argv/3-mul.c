#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two arguments integers
 * @argc: arguments count
 * @argv: arguments vector
 * Return: Exit status
 */

int main(int argc, char *argv[0])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}

	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds positive numbers from arguments
 * @argc: arguments count
 * @argv: arguments vector
 * Return: Exit status
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
		for (i = 1; i < argc; i++)
			if (!isdigit(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
	                else
			{
				sum += atoi(argv[i]);
			}
	printf("%d\n", sum);

	return (0);
}

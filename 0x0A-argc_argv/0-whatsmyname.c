#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Prints the name of the program
 * @argc: arguments count
 * argv: arguments vector
 * Return: Exit Status
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);

	return (0);
}

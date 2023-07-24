#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - The main function of the program
 * @argc - the number of args passed to the command line including program name
 * @argv - the array of args passed to the command line including programname
 * Return - Exit Status of the program after execution
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);

	return (0);
}

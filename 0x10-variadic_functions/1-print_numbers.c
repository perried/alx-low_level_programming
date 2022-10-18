#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 *
 * @separator: the string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: void
 */

void print_numbers(const char *separator, unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			printf("%d%s", va_arg(ptr, n), separator);
		}
		else
		{
			printf("%d", va_arg(ptr, n));
		}
	}
	printf("\n");
}

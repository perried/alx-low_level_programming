#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - print strings
 *
 * @separator: the string to be printed between strings
 * @n: number of strings passed
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list str;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		if (!(va_arg(str, char *)))
		{
			printf("(nil)");
		}
		else
		{
			if (!separator)
			{
				printf("%s", va_arg(str, char *));
			}
			else
			{
				printf("%s%s", va_arg(str, char *), separator);
			}
		}
	}
	va_end(str);
	printf("\n");
}

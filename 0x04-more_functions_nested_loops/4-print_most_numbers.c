#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9,followed by a newline
 * excluding 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		_putchar('i');
	}
	_putchar('\n');
}

#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str: a string
 * Return: void
 */

void _puts(char *str)
{
	int n = 0;

	while (str[n] != '\n')
	{
		_putchar(str[n]);
		++n;
	}
	_putchar('\n');
}

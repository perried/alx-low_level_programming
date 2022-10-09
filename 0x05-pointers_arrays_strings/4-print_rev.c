#include "main.h"
#include "2-strlen.c"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: a string
 * Return: void
 */

void print_rev(char *s)
{
	int len = _strlen(s) - 1;

	while (len >= 0)
	{
		_putchar(s[len]);
		--len;
	}
	_putchar('\n');
}

#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - prints half of a string
 * @str: a string
 * Return: void
 */

void puts_half(char *str)
{
	int n;
	int i;

	n = (_strlen(str) - 1) / 2;
	for (i = 0; i <= n; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

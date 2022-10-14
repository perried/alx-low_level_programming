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

	n = (_strlen(str) - 1) / 2;
	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}

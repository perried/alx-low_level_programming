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
	int i = 0;

	if (_strlen(str) % 2 != 0)
	{
		i += 1;
	}
	for (n = (_strlen(str) + i) / 2; n < _strlen(str); n++) 
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}

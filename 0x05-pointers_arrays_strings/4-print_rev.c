#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: a string
 * Return: length of a string
 */

int _strlen(char *s)
{
	int counter = 0;
	int n = 0;

	while (s[n] != '\0')
	{
		++counter;
		++n;
	}
	return (counter);
}

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: a string
 * Return: void
 */

void print_rev(char *s)
{
	int len = _strlen(s);

	while (len > 0)
	{
		_putchar(s[len]);
		--len;
	}
	_putchar('\n');
}

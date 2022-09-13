#include "main.h"
/**
 * print_alphabet - printing alphabet
 *
 * Return: prints 0 when done
 */

int print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
	}
	_putchar('\n');
}

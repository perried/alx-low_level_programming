#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 * Return: On success 0
 */
void print_alphabet_x10(void)
{
	int n = 0;
	char ch = 'a';

	while (n < 10)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		n++;
	}
	_putchar('\n');
}

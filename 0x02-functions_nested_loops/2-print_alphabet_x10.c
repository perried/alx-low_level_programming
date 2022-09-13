#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 * Return: On success 0
 */
void print_alphabet_x10(void)
{
	char ch = 'a';

	for (int n = 0; n < 10; n++)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
	}
	_putchar('\n');
}

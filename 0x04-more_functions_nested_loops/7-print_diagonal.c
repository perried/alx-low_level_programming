#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: length of the diagonal
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int length;
		int spaces;

		for (length = 0; length < n; length++)
		{
			spaces = i;
			while (spaces > 0)
			{
				_putchar(' ');
				spaces--;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}

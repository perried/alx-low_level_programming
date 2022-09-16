#include "main.c"

/**
 * print_square - prints a suare, followed by a new line
 * @size: size of the square
 * Return: On success 0
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;
		int n;

		for (i = 0; i <= size; i++)
		{
			n = 0;
			while (n <= size)
			{
				_putchar('#');
				n++;
			}
			_putchar('\n');
		}
	}
}

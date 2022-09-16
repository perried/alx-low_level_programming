#include "main.h"

/**
 *print_triangle - prints a triangle, followed by a new line
 *@size: base and hieght of a triangle
 *Return: void
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int height;
		int spaces;
		int counter = 1;
		int builder;

		for (height = 1; height <= size; height++)
		{
			spaces = size - counter;
			while (spaces >= 1)
			{
				_putchar(' ');
				spaces--;
			}
			builder = counter;
			while (builder >= 1)
			{
				_putchar('#');
				builder--;
			}
			_putchar('\n');
			counter++;
		}
	}
}

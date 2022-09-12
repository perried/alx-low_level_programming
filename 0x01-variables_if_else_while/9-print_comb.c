#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (succes)
 */
int main(void)
{
	int d = '0';

	while (d <= '9')
	{
		putchar(d);
		if (d != '9')
		{
			putchar(',');
			putchar(' ');
		}
		d++;
	}
	putchar('\n');
	return (0);
}


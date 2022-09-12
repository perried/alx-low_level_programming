#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int ch = 97;

	while (ch <= 122)
	{
		putchar(ch);
		ch++;
	}
	ch = 65;
	while (ch <= 90)
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}

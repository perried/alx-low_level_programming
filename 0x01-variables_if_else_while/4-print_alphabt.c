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
		if (ch != 101 || ch != 110)
			putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}

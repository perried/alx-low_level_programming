#include <stdio.h>

/**
 *main - Entry point
 *Return: 0 on success
 */

int main(void)
{
	long int x = 612852475143;
	long int j;

	for (j = 2; j < x; j++)
	{
		if (x % j == 0)
		{
			x = x / j;
		}
	}
	printf("%ld\n", j);
	return (0);
}

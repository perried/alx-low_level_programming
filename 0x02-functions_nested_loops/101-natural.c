#include <stdio.h>

/**
 * below_1024 - sum of multiples of 3 or 5
 *
 * Return: prints 0 on success
 */
void below_1024(void)
{
	int _sum = 0;
	int n = 0;

	while (n < 1024)
	{
		if (n % 3 == 0 || n % 5 == 0)
			_sum += n;
		n++;
	}
	printf("%d\n", _sum);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	below_1024();
	return (0);
}

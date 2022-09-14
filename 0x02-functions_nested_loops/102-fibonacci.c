#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int t1 = 1;
	int t2 = 2;
	int next_term = t1 + t2;
	int i;

	for (i = 3; i <= 50; i++)
	{
		printf("%d, %d", t1, t2);
		t1 = next_term;
		t2 += next_term;
	}
	printf("\n");
	return (0);
}

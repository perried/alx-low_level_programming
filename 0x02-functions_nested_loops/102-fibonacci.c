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
	int t3;
	int i;

	printf("%d, %d", t1, t2);
	for (i = 3; i <= 50; ++i)
	{
		t3 = t1 + t2;
		printf(", %d", t3);
		t1 = t2;
		t2 = t3;
	}
	printf("\n");
	return (0);
}

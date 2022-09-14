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
	int i = 3;

	while (i < 99)
	{
		printf("%d, %d", t1, t2);
		t1 += t2;
		t2 += t1;
		i++;
	}
	return (0);
}	

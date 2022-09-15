#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 on success
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i != 100)
		{
			if (i % 15 == 0)
			{
				puts("FizzBuzz ");
			}
			else if (i % 3 == 0)
			{
				puts("Fizz ");
			}
			else if (i % 5 == 0)
			{
				puts("Buzz ");
			}
			else
			{
				prinf("%d", i);
			}
		}
		else
		{
			puts("Buzz");
		}

	}
	printf("\n");

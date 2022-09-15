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
				printf("%d", "FizzBuzz ");
			}
			else if (i % 3 == 0)
			{
				printf("%s", "Fizz ");
			}
			else if (i % 5 == 0)
			{
				printf("%s", "Buzz ");
			}
			else
			{
				prinf("%d ", i);
			}
		}
		else
		{
			printf("%s", "Buzz");
		}

	}
	printf("\n");

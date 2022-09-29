#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number to be computed on
 * Return: -1 if n is less than 0, 1 if n is 0 otherwise a factorial of n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

#include "main.h"

/**
 * sum_them_all - sums all it's parameters
 *
 * @n: number
 *
 * Return: 0 if n == 0 otherwise, returns sum of parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i;
	va_list ptr;

	va_start(ptr, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, int);
	}
	va_end(ptr);

	return (sum);
}

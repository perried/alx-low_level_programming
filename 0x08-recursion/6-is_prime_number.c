#include "main.h"

int prime_number(int n, int i);

/**
 * is_prime_number - checks if a number is prime
 * @n: a number to be checked
 * Return: 1 if true otherwise 0
 */

int is_prime_number(int n)
{
	int i = 2; /* a divider */

	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	return (prime_number(n, i));
}

/**
 * prime_number - checks for primality
 * @n: number to be checked
 * @i: dividor
 * Return: 1 if true otherwise 0
 */

int prime_number(int n, int i)
{
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);
	return (prime_number(n, i + 1));
}

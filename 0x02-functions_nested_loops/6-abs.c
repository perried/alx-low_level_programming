#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *@n: int to be computed
 *
 * Return: On success 0
 */
int _abs(int n)
{
	if (n > 0)
		return (n);
	else
		return (-1 * n);
}

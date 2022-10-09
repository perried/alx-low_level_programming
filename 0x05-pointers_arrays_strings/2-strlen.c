#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: a string
 * Return: length of a string
 */

int _strlen(char *s)
{
	int counter = 0;
	int n = 0;

	while (s[n] != EOF)
	{
		++counter;
		++n;
	}
	return (counter);
}

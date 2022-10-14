#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - a function that reverses a string
 * @s: a string
 * Return: void
 */

void rev_string(char *s)
{
	int len = _strlen(s);
	char ch;
	int n;

	for (n = 0; n < len / 2; n++)
	{
		ch = s[n];
		s[n] = s[len - n - 1];
		s[len -n -1] = ch;
	}
}

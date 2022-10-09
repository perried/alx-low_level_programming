#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - a function that reverses a string
 * @s: a string
 * Return: void
 */

void rev_string(char *s)
{
	int len = _strlen(s) - 1;
	char **p = &s;
	int n = 0;

	while (len >= 0)
	{
		*(s + n) = *(p + len);
		--len;
		++n;
	}
}

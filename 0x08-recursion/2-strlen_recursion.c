#include "main.h"

/**
 * _strlen_recursion - returns length of a string
 * @s: a string
 * Return: length of s
 */

int _strlen_recursion(char *s)
{
	int lenstr = 0;

	if (*s)
	{
		lenstr++;
		lenstr += _strlen_recursion(s + 1);
	}
	return (lenstr);
}

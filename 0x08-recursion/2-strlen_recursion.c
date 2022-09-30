#include "main.h"

/**
 * _strlen_recursion - returns length of a string
 * @s: a string
 * Return: length of s
 */

int _strlen_recursion(char *s)
{
	if (*s != '\n')
		return (1 + _strlen_recursion(s + 1));
}

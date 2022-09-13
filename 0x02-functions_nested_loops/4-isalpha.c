#include "main.h"

/**
 * _islower - checks for alphabetic character
 * @c: character to be checked
 *
 * Return: 1 if letter, lowercase or uppercase and 0 if otherwise
 */
int _islower(int c)
{
	bool _islower = (c >= 97 && c <= 122);
	bool _isupper = (c >= 65 && c <= 90);

	if (_islower || _isupper)
		return (1);
	return (0);
}

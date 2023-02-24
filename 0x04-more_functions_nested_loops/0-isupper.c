#include "main.h"

/**
 * _isupper -> checks if the letter is upper case
 * @c: is a character
 * Return: it returns 1 or 0 depending on the condition
 */

in _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

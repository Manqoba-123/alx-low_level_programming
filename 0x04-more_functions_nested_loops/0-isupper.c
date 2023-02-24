#include "main.h"

/**
 * _isupper -> checks if the letter is upper case
 * @c: is a character
 * Return: it returns 1 or 0 depending on the condition
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

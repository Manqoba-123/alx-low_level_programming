#include "main.h"

/**
 * _isupper -> checks if the letter is upper case
 * @c: is a character
 * Return: it returns 1 or 0 depending on the condition
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		_putchar(c + '0');
		_putchar(':');
		_putchar(' ');
		_putchar('1');
	}
	else
	{
		_putchar(c + '0');
		_putchar(':');
		_putchar(' ');
		_putchar('0');
	}
	_putchar('\n');
}

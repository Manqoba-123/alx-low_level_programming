#include "main.h"

/**
 * _isalpha(int c) - Checks if chararcter is alphabets
 * @c: Integer
 *
 * Return: 1 if c is a letter else 0
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);

}

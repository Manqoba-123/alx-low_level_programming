#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: input
 * Return: success
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include "main.h"

/**
 * _isdigit - checks digits
 * @c: The character
 * Return: returns 1 or o depends on the condition
 */

int _isdigit(int c)
{
	if (c >= '0' || c <= '0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include "main.h"

/**
 * _isupper - checks cases
 * @c: The charecter
 * Return: returns 1 or 0 depending on condition
 */

int _isupper(int c)
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

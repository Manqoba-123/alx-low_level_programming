#include "main.h"

/**
 * string_toupper -> changes cases for letters
 * @a: character
 * Return: returns character
 */

char *string_toupper(char *a)
{
	int i;

	i = 0;
	while (a[i] != '\0')
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] -= 32;
		}
		i++
	}
	return (a);
}

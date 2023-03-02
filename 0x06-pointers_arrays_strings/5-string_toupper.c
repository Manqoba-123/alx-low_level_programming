#include "main.h"
#include <string.h>

/**
 * string_toupper -> changes cases for letters
 * @str: character
 * Return: returns character
 */

char *string_toupper(char *str)
{
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

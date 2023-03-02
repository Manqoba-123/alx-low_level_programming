#include "main.h"
#include <string.h>

/**
 * string_toupper -> changes cases for letters
 * @str: character
 * Return: returns character
 */

char *string_toupper(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str -= 32;
		}
		str++;
	}
}

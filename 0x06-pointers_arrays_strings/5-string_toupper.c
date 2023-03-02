#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * string_toupper -> changes cases for letters
 * @a: character
 * Return: returns character
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; i < strlen(str); i++)
	{
		str[i] = toupper(str[i]);
	}
}

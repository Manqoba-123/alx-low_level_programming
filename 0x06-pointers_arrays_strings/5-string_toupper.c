#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * string_toupper -> changes cases for letters
 * @a: character
 * Return: returns character
 */

char *string_toupper(char *a)
{
	int i;

	for (i = 0; i < strlen(a); i++)
	{
		a[i] = toupper(a[i]);
	}
}

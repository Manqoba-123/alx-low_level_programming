#include "main.h"
#include <string.h>

/**
 * puts2 -> returns any charect
 * @str: string
 * Return: returns the string
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}

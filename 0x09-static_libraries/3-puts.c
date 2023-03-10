#include "main.h"

/**
 * _puts -> prints string on stdout
 * @str: String
 * Return: success
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

#include "main.h"

/**
 * puts_half - Prints the last half of the string
 * @str: String pointer
 *
 * Return: void
 */

void puts_half(char *str)
{
	int length = strlen(str);
	int start = length / 2;
	int end = length;
	int i = start;

	if (length % 2 != 0)
	{
		start++;
	}
	while (i < end)
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}

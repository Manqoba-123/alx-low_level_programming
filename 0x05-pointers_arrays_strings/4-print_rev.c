#include "main.h"

/**
 * print_rev - Prints the string in reverse
 * @s: String
 *
 * Return: void
 */

void print_rev(char *s)
{
	int len = strlen(s);
	int i = len - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	putchar('\n');
}

#include "main.h"

/**
 * print_line -> prints line
 * @n: number of lines to be printed
 * return: int
 */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		if (n > 0)
		{
			_putchar('_');
			i++;
		}
		else
		{
			_putchar('\n');
		}
		_putchar('\n');
	}
}

#include "main.h"

/**
 * print_most_numbers -> output 0-9 wxcept 2 & 4
 * Return: void
 */

void print_most_numbers(void)
{
	int i;

	while (i < 10)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
		i++;
		_putchar('\n');
	}
}

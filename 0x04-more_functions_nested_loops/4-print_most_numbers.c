#include "main.h"

/**
 * print_most_numbers -> prints all the numbers 0-9 != 2 & 4
 * Return: always
 */

void print_most_numbers(void)
{
	for (int i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
		_putchar('\n');
	}
}

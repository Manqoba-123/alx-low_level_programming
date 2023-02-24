#include "main.h"

/**
 * more_numbers -> prints numbesr 0-14
 * Return: returns void
 */

void more_numbers(void)
{
	int i = 0;

	while (i <= 10)
	{
		int j = 0;

		while (j < 15)
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}

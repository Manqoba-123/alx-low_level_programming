#include "main.h"

/**
 * print_alphabet_x10 -> 10 times of alphabets
 */

void print_alphabet_x10(void)
{
	int i = 0, j;

	while (i < 10)
	{
		j = 'a';
		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
	_putchar('\n');
	return (0);
}

#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabets 10 times
 * @void: Returns void
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 1; i <= 10; i++)
	{
		char alphabet = 'a';

		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
	}
}

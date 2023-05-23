#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Prints alphabets
 * @void: It returns nothing
 *
 * Return: aphabets
 */


void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}

#include "main.h"

/**
 * main, alphabets -> to output the alphabets
 * Return: always 0
 */
void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
}

int main(void)
{
	print_alphabet();
	return (0);
}

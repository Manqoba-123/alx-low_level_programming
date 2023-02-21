#include "main.h"

/**
 * print_last_digit -> outputs the last digit
 * @n: char
 * Return: returns 0
 */
int print_last_digit(int n)
{
	int last_dig;

	last_dig = n % 10;

	if (n < 0)
		n = -n;
	_putchar(last_dig + '0');
	return (last_dig);
}

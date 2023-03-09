#include "main.h"

/**
 * _sqrt -> prints sqrt
 * @n: input
 * @x: input
 * Return: success
 */

int _sqrt(int n, int x)
{
	if ((x * x) == n)
	{
		return (x);
	}
	if (x == n / 2)
	{
		return (-1);
	}
	return (_sqrt(n, x + 1));
}

/**
 * _sqrt_recursion -> prints naturalo square
 * @n: input
 * Return: success
 */

int _sqrt_recursion(int n)
{
	int x = 0;

	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt(n, x));
}

#include "main.h"

/**
 * pal1 - gets the length of a
 * @a: string
 * @b: length count
 * Return: success
 */

int pal1(char *a, int b)
{
	if (*a == 0)
		return (b - 1);
	return (pal1(a + 1, b + 1));
}

/**
 * pal2 -> comparison
 * @a: string
 * @b: length
 * Return: success
 */

int pal2(char *a, int b)
{
	if (*a != *(a + b))
		return (0);
	else if (*a == 0)
		return (1);
	return (pal2(a + 1, b - 2));
}

/**
 * is_palindrome -> checks the palindrome
 * @s: string
 * Return: success
 */

int is_palindrome(char *s)
{
	int b;

	b = pal1(s, 0);
	return (pal2(s, b));
}

#include "main.h"

/**
 * *_memset -> show memeory
 * @s: input
 * @b: input
 * @n: input
 * Return: success
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *i = s;

	while (n-- > 0)
	{
		*i++ = b;
	}
	return (s);
}

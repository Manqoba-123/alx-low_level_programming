#include "main.h"

/**
 * _memset - fill blocks of memory with specific value
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: no. of bytes to be changed
 * Return: array
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

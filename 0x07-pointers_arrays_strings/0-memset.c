#include "main.h"

/**
 * _memset - fills memory
 * @s: pointer to memory block to fill
 * @b: value set in each byte of the memory block
 * @n: number of byte needs to be filled
 *
 * Return: Pointer to memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *temp = s;
	unsigned int i = 0;

	while ( i < n)
	{
		temp[i] = b;
		i++;
	}
	return (temp);
}

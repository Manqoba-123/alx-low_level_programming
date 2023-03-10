#include "main.h"

/**
 * *_memcpy -> copies memory
 * @dest: destination
 * @src: source
 * @n: input
 * Return: success
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *answer = dest;

	while (n--)
	{
		*dest++ = *src++;
	}
	return (answer);
}

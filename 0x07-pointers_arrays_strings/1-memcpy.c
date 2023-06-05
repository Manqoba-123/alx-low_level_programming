#include "main.h"

/**
 * _memcpy - copies the memery block from on location to other
 * @dest: pointer to dest memory block
 * @src: pointer to src memory block
 * @n: number of byte
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest_temp = dest;
	char *src_temp = src;
	unsigned int i = 0;

	while (i < n)
	{
		dest_temp[i] = src_temp[i];
		i++;
	}
	return (dest_temp);
}

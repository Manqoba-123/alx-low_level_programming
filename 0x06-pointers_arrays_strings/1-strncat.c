#include "main.h"

/**
 * _strncat - Concatenate strings
 * @dest: Pointer to destination
 * @src: Pointer to source
 * @n: Intger
 *
 * Return: Pointer to destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;

	while (*temp != '\0')
	{
		temp++;
	}
	while (*src != '\0' && n > 0)
	{
		*temp = *src;
		src++;
		temp++;
		n--;
	}
	*temp = '\0';
	return (dest);
}

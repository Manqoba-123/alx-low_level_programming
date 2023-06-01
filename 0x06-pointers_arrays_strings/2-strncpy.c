#include "main.h"

/**
 * _strncpy - Copies string
 * @dest: Pointer to destination
 * @src: Pointer to source
 * @n: Integer
 *
 * Return: character
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *temp = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest  = '\0';
		dest++;
		n--;
	}
	return (temp);
}

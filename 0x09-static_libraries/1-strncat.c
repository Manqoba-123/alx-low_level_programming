#include "main.h"

/**
 * *_strncat - Entry point
 * Description: Concatenates two strings
 * @dest: destinitation
 * @src: source
 * @n: input
 * Return: success
 */

char *_strncat(char *dest, char *src, int n)
{
	char *i = dest;

	while (*i != '\0')
	{
		i++;
	}
	while (*src != '\0' && n-- > 0)
	{
		*i++ = *src++;
	}
	*i = '\0';
	return (dest);
}

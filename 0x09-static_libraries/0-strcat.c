#include "main.h"

/**
 * *_strcat -> string adds up
 * @dest: destination
 * @src: source
 * Return: success
 */

char *_strcat(char *dest, char *src)
{
	char *i = dest;

	while (*i != '\0')
	{
		i++;
	}
	while (*src != '\0')
	{
		*i = *src;
		i++;
		src++;
	}
	*i = '\0';
	return (dest);
}

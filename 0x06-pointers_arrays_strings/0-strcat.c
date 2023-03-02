#include "main.h"
#include <string.h>

/**
 * *_strcat -> string concanetion
 * @dest: takes destination string
 * @src: takes the source string
 * Return: returns pointer as a result
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dest);
}

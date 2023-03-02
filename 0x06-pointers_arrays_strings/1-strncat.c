#include "main.h"

/**
 * *_strncat -> conc to nth term
 * @dest: takes destination of a string
 * @src: takes source of a string
 * @n: takes number of nth term
 * Return: returns dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0' && n-- > 0)
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (*dest);
}

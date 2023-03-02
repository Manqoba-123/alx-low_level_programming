#include "main.h"

/**
 * *_strncpy -> copies string
 * @dest: returns destination of a string
 * @src: returns the sourcenof the string
 * @n: interger
 * Return: returns a string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = scr[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

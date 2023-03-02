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

	for (i = 0; i < n && scr[i] != '\0'; i++)
	{
		dest[i] = scr[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}

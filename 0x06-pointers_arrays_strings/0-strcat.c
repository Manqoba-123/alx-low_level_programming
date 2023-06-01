#include "main.h"

/**
 * _strcat - Concatenate two strings
 * @dest: Pointer to destination string
 * @src: Pointer to source string
 *
 * Return: Pointer to concatenated string
 */

char *_strcat(char *dest, char *src)
{
	/**
	 * Assigning dest to a temporary pointer
	 * which will be used to iterate to the end
	 * of dest string
	 */

	char *temp = dest;

	while (*temp != '\0')
	{
		temp++;
	}

	/**
	 * To iterate the src string now and then
	 * the temporary pointer assigned to src
	 */

	while (*src != '\0')
	{
		*temp = *src;
		src++;
		temp++;
	}
	/* Now we have to terminate the string */
	*temp = '\0';

	return (dest);
}

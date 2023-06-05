#include "main.h"

/**
 * _strchr - search for first occurrence
 * @s: pointer to null-terminated string
 * @c: integer for characters to be searched
 *
 * Return: pointer to be allocated
 */

char *_strchr(char *s, char c)
{
	char *temp = s;

	while (*temp != '\0')
	{
		if (*temp == c)
		{
			return (temp);
		}
		temp++;
	}
	return (NULL);
}

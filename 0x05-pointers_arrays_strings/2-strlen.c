#include "main.h"

/**
 * _strlen - Prints length of string
 * @s: Character pointer
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

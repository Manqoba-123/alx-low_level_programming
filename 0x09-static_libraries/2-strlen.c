#include "main.h"

/**
 * _strlen -> print length of string
 * @s: input
 * Return: success
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

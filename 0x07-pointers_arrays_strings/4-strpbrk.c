#include "main.h"

/**
 * _strpbrk - searches for any of a set of bytes
 * @s: pointer to null-terminated string
 * @accept: pointer to null-terminated string
 *
 * Return: string else NULL
 */

char *_strpbrk(char *s, char *accept)
{
	char *temp_s = s;
	char *temp_accept = accept;
	int i;

	while (*temp_s != '\0')
	{
		i = 0;
		while (temp_accept[i] != '\0')
		{
			if (*temp_s == temp_accept[i])
			{
				return (temp_s);
			}
			i++;
		}
		temp_s++;
	}
	return (NULL);
}

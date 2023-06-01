#include "main.h"

/**
 * _strcmp - Compares 2 strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Difference of two strings
 */

int _strcmp(char *s1, char *s2)
{
	int flag, i = 0;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			flag = s1[i] - s2[i];
			return (flag);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

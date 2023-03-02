#include "main.h"

/**
 * _strcmp -> compatesr two strings
 * @s1: takes the input value of a string
 * @s2: takes input like s1
 * Return: s1 comp s2
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

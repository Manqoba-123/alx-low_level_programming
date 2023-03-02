#include "main.h"

/**
 * _strcmp -> compatesr two strings
 * @s1: takes the input value of a string
 * @s2: takes input like s1
 * Return: s1 comp s2
 */

int _strcmp(char *s1, char *s2)
{
	int j;

	j = 0;
	while (s1[j] != '\0' && s2[j] != '\0')
	{
		if (s1[j] != s2[j])
		{
			return (s1[j] - s2[j]);
		}
		i++;
	}
	return (0);
}

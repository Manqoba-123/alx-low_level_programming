#include "main.h"

/**
 * _atoi - conversion
 * @s: input
 * Return: success
 */

int _atoi(char *s)
{
	int i = 1;
	unsigned int answer = 0;

	while (*s != '\0' && (*s < '0' || *s > '9'))
	{
		if (*s == '-')
		{
			i *= -1;
		}
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		answer = answer * 10 + (*s - '0');
		s++;
	}
	return (i * answer);
}

#include "main.h"

/**
 * cap_string - Capitilize a string
 * @c: String
 *
 * Return: Character
 */

char *cap_string(char *c)
{
	int i = 0;
	/* To indicate that the next character should be capitalize */
	char cap_next = 1;

	while (c[i] != '\0')
	{
		if (cap_next && c[i] >= 97 && c[i] <= 122)
		{
			c[i] = c[i] - 32;
		}
		if (c[i] == ' ' || c[i] == ',' || c[i] == '\n' || c[i] == '.'
			|| c[i] == '\t')
		{
			cap_next = 1;
		}
		else
		{
			cap_next = 0;
		}
		i++;
	}
	return (c);
}

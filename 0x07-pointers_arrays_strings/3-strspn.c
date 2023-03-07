#include "main.h"

/**
 * _strspn -> outputs
 * @s: input
 * @accept: input
 * Return: success
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k, verify;

	k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		verify = 0;

		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == s[i])
			{
				k++;
				verify = 1;
			}
		}
		if (verify == 0)
			return (k);
	}
	return (k);
}

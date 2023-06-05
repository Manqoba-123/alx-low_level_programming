#include "main.h"

/**
 * _strspn - length of prefix substring
 * @s: pointer to the null-terminated string
 * @accept: pointer to null-terminated string
 *
 * Return: length of string
 */

unsigned int _strspn(char *s, char *accept)
{
	char *temp = s;
	char *temp_accept = accept;
	int count = 0, i;
	int flag = 1;

	while (*temp != '\0' && flag)
	{
		/* reset flag */
		flag = 0;

		i = 0;
		while (temp_accept[i] != '\0')
		{
			if (*temp == temp_accept[i])
			{
				flag = 1;
				break;
			}
			i++;
		}
		if (flag)
		{
			count++;
			temp++;
		}
	}
	return (count);
}

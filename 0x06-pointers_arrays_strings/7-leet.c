#include "main.h"

/**
 * leet - Prints in leet speak
 * @c: String
 * Description: leet is interesting language which came around 80s
 *
 * Return: String
 */

char *leet(char *c)
{
	char *temp = c;

	while (*temp != '\0')
	{
		if (*temp == 'A' || *temp == 'a')
		{
			*temp = '4';
		}
		else if (*temp == 'E' || *temp == 'e')
		{
			*temp = '3';
		}
		else if (*temp == 'O' || *temp == 'o')
		{
			*temp = '0';
		}
		else if (*temp == 'T' || *temp == 't')
		{
			*temp = '7';
		}
		else if (*temp == 'L' || *temp == 'l')
		{
			*temp = '1';
		}
		temp++;
	}
	return (temp);
}

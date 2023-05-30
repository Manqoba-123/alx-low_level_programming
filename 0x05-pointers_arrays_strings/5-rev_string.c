#include "main.h"

/**
 * rev_string - Prints the reverse of string
 * @s: String pointer
 *
 * Return: void
 */

void rev_string(char *s)
{
	int len = strlen(s);
	int i = len - 1;
	int j = 0;
	/**
	 * temp is declared for holding the value at index 0
	 * and change the value at index 0 to be from last index
	 * and so on
	 */
	char temp;

	while (j < i)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		i--;
		j++;
	}
}

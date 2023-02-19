#include <stdio.h>

/**
 * main - entry
 * Description: outputs lower case alphabets
 * Return: always 0 (success)
 */
int main(void)
{
	char alphabets = 'a';

	while (alphabets <= 'z')
	{
		putchar(alphabets);
		alphabets++;
	}
	return (0);
}

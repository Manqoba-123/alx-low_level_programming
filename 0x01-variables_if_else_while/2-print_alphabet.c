#include <stdio.h>

/**
 * main - entry
 * Description: outputs lower case alphabets
 * Return: always 0 (success)
 */
int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		putchar(alphabets);
		putchar("\n");
	}
	return (0);
}

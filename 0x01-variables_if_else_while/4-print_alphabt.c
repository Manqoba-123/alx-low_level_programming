#include <stdio.h>

/**
 * main - Entry point
 * Description: Omitting q and e
 * Return: Always 0
 */

int main(void)
{
	char alphabets = 'a';

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		if (alphabets == 'q' || alphabets == 'e')
		{
			continue;
		}
		putchar(alphabets);
	}

	putchar('\n');
	return (0);
}

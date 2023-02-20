#include <stdio.h>

/**
 * main - entry
 * Description: ommiting letter q and e
 * Return: always 0 (success)
 */
int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		if (alphabets != 'e' && alphabets != 'q')
		{
			putchar(alphabets);
		}
	}
	putchar('\n');
	return (0);
}

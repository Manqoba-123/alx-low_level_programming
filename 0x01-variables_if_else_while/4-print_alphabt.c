#include <stdio.h>

/**
 * main - entry
 * Description: ommiting letter q and e
 * Return: always 0 (success)
 */
int main(void)
{
	char alphabets = 'a';

	while (alphabets <= 'z')
	{
		if (alphabets != 'e' && alphabets != 'q') 
		{
			putchar(alphabets);
		}
		alphabets++;
	}
	putchar("\n");
	return (0);
}

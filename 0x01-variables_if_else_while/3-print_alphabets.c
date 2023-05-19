#include <stdio.h>

/**
 * main - Entry point
 * Description: Print alphabets in lower and upper case
 * Return: Always 0
 */

int main(void)
{
	char alpha_bets = 'a';
	char alpha_BETS = 'A';

	while (alpha_bets <= 'z')
	{
		putchar(alpha_bets);
		alpha_bets++;
	}
	while (alpha_BETS <= 'Z')
	{
		putchar(alpha_BETS);
		alpha_BETS++;
	}
	putchar('\n');
	return (0);
}

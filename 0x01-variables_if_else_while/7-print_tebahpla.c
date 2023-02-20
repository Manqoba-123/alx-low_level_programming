#include <stdio.h>

/**
 * main - entry
 * Descriotion: revesre alphabets
 * Return: always (0) success
 */
int main(void)
{
	char rAlphabets = 'z';

	while (rAlphabets >= 'a')
	{
		putchar(rAlphabets);
		rAlphabets--;
	}
	putchar('\n');
	return (0);
}

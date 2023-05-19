#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints hexadecimal
 * Return: always 0
 */

int main(void)
{
	int i = 0;
	char j = 'a';

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	while (j <= 'f')
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}

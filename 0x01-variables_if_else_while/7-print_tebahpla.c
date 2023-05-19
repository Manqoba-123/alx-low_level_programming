#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints alphabets in reverse
 * Return: Always 0
 */

int main(void)
{
	char stebahpla = 'z';

	while (stebahpla >= 'a')
	{
		putchar(stebahpla);
		stebahpla--;
	}
	putchar('\n');
	return (0);
}

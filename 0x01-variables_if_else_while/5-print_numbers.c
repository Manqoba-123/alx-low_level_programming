#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints base 10 digits
 * Return: Always 0
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}

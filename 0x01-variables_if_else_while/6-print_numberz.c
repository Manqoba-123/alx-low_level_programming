#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints base 10 numbers
 * Return: Always 0
 */

int main(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}

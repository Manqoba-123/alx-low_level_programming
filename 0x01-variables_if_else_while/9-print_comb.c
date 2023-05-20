#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints combination of single digit
 * Return: always 0
 */

int main(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');

		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
#include <stdio.h>

/**
 * main - entry
 * Description: out puts numbers
 * Return: always 0 (success)
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar((char)(num + '0'));
		num++;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - entry
 * Description: outputs numbers
 * Return: alwys 0 (success)
 */
int main(void)
{
	int num2 = 0;

	while (num2 < 10)
	{
		putchar((char)(num2) + '0');
		num2++;
	}
	putchar('\n');
	return (0);
}

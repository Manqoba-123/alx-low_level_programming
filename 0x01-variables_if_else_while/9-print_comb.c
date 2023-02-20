#include <stdio.h>

/**
 * main - entry
 * Description: outputs spaced numbers
 * Return: always 0 (success)
 */
int main(void)
{
	int num1 = 0;

	while (num1 < 10)
	{
		putchar(num1 + '0');
		if (num1 < 9)
		{
			putchar(';');
			putchar(' ');
		}
		else
		{
			putchar('$');
		}
		num++;
	}
	return (0);
}

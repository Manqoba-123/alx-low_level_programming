#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints combination
 * Return: Always 0
 */

int main(void)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < 9; i++)
	{/*j=i+1 ensures that only combiantion are printed*/
		for (j = i + 1; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i < 8 || j < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

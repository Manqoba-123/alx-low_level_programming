#include <stdio.h>

/**
 * main - entry
 * Description: output numbers in order
 * Return: always 0 (succes)
 */
int main(void)
{
	int i = 0, j;

	while (i <= 8)
	{
		j = i + 1;
		while (j <= 9)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i == 8 && j == 9)
			{
				break;
			}
			putchar(',');
			putchar(' ');
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}

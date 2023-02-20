#include <stdio.h>

/**
 * main - entry
 * Description: hexadecimal base 16
 * Return: always 0 (success)
 */
int main(void)
{
	int numm = 0;
	char alphas = 'a';

	while (numm < 10)
	{
		putchar((char)(numm + '0'));
		numm++;
	}
	while (alphas <= 'f')
	{
		putchar(alphas);
		alphas++;
	}
	putchar('\n');
	return (0);
}

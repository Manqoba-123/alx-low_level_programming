#include <stdio.h>

/**
 * main - entry
 * Description: programmer for double output for alphabets
 * Return: always 0 (success)
 */
int main(void)
{
	char lowerCase = 'a';
	char upperCase = 'A';

	while (lowerCase <= 'z')
	{
		putchar(lowerCase);
		lowerCase++;
	}
	while (upperCase <= 'Z')
	{
		putchar(upperCase);
		upperCase++;
	}
	printf('\n');
	return (0);
}

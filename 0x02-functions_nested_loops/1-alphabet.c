#include "main.h"

/**
 * main, alphabets -> to output the alphabets
 * Return: always 0
 */
void alphabets(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
}

int main(void)
{
	alphabets();
	return (0);
}

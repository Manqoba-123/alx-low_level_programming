#include <stdio.h>

/**
 * main - the starting point
 * Description: outpust the sizes
 * Return: always 0 (success)
 */
int main(void)
{
	long long int i;
	long int d;
	int b;
	char c;
	float a;


	printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(a));

	return (0);
}

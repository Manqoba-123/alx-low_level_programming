#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main- entry point
 * Description: Prints if number is negative, zero or positive
 * Return: Alwyas 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry
 * Description: programme outputs last digit
 * Return: always 0 (success)
 */
int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;

	printf("Last digit of %d ", n);
	if (lastDigit > 5)
	{
		printf("is %d ", lastDigit);
		printf("and is greater than 5\n");
	}
	else if (lastDigit == 0)
	{
		printf("is %d ", lastDigit);
		printf("and is 0\n");
	}
	else
	{
		printf("is %d ", lastDigit);
		printf("and is less than 6 and not 0\n");
	}

	return (0);
}

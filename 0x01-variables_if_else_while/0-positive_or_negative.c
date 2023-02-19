#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry
 * Description: programme if the number is positive,negative,equal to zero
 * Return: always 0 (success)
 */
int main(void)
{
	int rand1 = 98;
	int rand2 = 0;
	int rand3 = -98;

	if (rand1 > 0)
	{
		printf("%d is positive\n", rand1);
	}
	else if (rand2 == 0)
	{
		printf("%d is zero\n", rand2);
	}
	else
	{
		printf("%d is negative\n", rand3);
	}
	return (0);
}

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
	int randomNumber;

	srand(time(0));
	ranomdNumber = rand() - RAND_MAX / 2;

	if (randomNumber > 0)
	{
		printf("%d is positive\n", randomNumber);
	}
	else if (randomNumber == 0)
	{
		printf("%d is zero\n", randomNumber);
	}
	else
	{
		printf("%d is negative\n", randomNumber);
	}
	return (0);
}

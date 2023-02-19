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
	long int randomNumber;
	srand(time(NULL));
	randomNumber = rand();

	if (randomNumber > 0)
	{
		printf("%ld is positive\n", randomNumber);
	}
	else if (randomNumber == 0)
	{
		printf("%ld is zero\n", randomNumber);
	}
	else
	{
		printf("%ld is negative\n", randomNumber);
	}
	return (0);
}

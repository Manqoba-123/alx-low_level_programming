#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main -> prints out productof numbers
 * @argc: arguments count
 * @argv: argument vector
 * Return: success
 */

int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
	}

	return (0);
}

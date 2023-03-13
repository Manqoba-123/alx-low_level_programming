#include "main.h"
#include <stdio.h>

/**
 * main -> prints arguments
 * @argc: arrgument count
 * @argv: argument vector
 * in a for of 1-d array
 * Return: success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

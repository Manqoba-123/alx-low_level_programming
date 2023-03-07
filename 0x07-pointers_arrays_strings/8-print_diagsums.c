#include <stdio.h>
#include "main.h"

/**
 * print_diagsums -> outputs
 * @a: input
 * @size: input
 * Return: success
 */

void print_diagsums(int *a, int size)
{
	int i, j, result1 = 0, result2 = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
		result1 = result1 + a[i];
	for (j = size - 1; j <= (size * size) - size; j = j + size - 1)
		result2 = result2 + a[j];
	printf("%d, %d\n", result1, result2);
}

#include "main.h"

/**
 * print_array - Prints array elements
 * @a: Integer pointer
 * @n: Integer nuumber of elements
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);

		if (i != n - 1)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}

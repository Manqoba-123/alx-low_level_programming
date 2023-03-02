#include "main.h"

/**
 * reverse_array -> reversing the array
 * @a: character
 * @n: number of content of an array
 * Return: returns integers
 */

void reverse_array(int *a, int n)
{
	int i, j;

	i = 0;
	j = n - 1;
	while (i < j)
	{
		int temp;

		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}

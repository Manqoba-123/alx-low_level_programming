#include "main.h"

/**
 * reverse_array - Prints reversed elements
 * @a: Integer
 * @n: Number of elements
 *
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n -1;
	int temp;

	while (i < j)
	{
		/* Taking the value of a[i] assign to temp */
		temp = a[i];
		/* Takng  element, assign it to a[i] */
		a[i] = a[j];
		/* Then the value of temp to a[j] */
		a[j] = temp;
		i++;
		j--;
	}
}

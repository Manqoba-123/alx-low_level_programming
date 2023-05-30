#include "main.h"

/**
 * swap_int - Swapping values
 * @a: Pointer integer
 * @b: Pointer integer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

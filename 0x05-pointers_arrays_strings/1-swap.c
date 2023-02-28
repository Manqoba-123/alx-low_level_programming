#include "main.h"

/**
 * swap_int -> swapping 2 integers
 * @a: fisrt integer
 * @b: second integer
 * Return: returns integers
 */

void swap_int(inta *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

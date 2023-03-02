#include "main.h"
#include <string.h>

/**
 * *_strncat -> conc to nth term
 * @dest: takes destination of a string
 * @src: takes source of a string
 * @n: takes number of nth term
 * Return: returns dest
 */

char *_strncat(char *dest, char *src, int n)
{
	strcat(dest, src, n);
	return (*dest);
}

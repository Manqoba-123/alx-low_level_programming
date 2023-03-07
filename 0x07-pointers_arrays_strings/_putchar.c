#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the char c to stdout
 * @c: The char to print
 * Return: succes
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

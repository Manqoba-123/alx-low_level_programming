#include <unistd.h>

/**
 * _putchar -> write the char c to ctdout
 * @c: print
 * Return: success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

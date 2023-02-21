#include "main.h"

/**
 * _isalpha -> checking letters
 * @c: a char
 * Return: returns 1 or 0 depending on the condition
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

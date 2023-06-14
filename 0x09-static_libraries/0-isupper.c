#include "main.h"

/**
 * _isupper - function checks for uppercase letters only
 * @c: char to check
 *
 * Return: 0 if lowercase or 1 if upper found
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

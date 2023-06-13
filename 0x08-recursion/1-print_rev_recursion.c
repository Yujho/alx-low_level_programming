#include "main.h"

/**
 * _print_rev_recursion - Reverse printing of a string
 * @s: string to be printed
 *
 * Return: Always 0 (success)
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

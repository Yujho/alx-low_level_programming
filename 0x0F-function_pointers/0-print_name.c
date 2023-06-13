#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print name
 * @name: name to be printed
 * @f: format
 *
 * Return: Always 0 (success)
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
			f(name);
}

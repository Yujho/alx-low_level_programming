#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to print
 */
void _puts(char *str)
{
	while (*str != '\0')	/*while loop prints strng chars to std imput*/
	{
		_putchar(*str++);
	}
		_putchar('\n');
}

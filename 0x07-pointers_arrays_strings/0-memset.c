#include "main.h"

/**
 * _memset - fills a block of memory with a particular constatant byte value
 * @s: Starting address of memory to be filled
 * @b: Value to be filled
 * @n: number of time to copy b
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}

return (s);
}

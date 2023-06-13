#include "main.h"

/**
 * _memcpy - copy particular number of bytes from one memory area to another
 * @src: memory area to be copied from
 * @dest: memory area to be paste at
 * @n: number of bytes to copy from src to dest
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}

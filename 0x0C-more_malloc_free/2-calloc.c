#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: memory area allocated for filling
 * @b: copied char
 * @n: quantity for copying b
 *
 * Return: pointer is put back to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int l;

	for (l = 0; n > l; l++)
	{
		*(s + l) = b;
	}

	return (s);
}

/**
 * *_calloc - array memory allocation function
 * @nmemb: element numbers in the array
 * @size: of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0)
	{
		return (NULL);
	}

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);
/* set memory to zero */
	_memset(ptr, 0, nmemb * size);

	return (ptr);
}

#include "main.h"
#include <string.h>

/**
 * _strpbrk - Locates stings for set byte.
 * @s: Fuction parameter to be searched.
 * @accept: The set of bytes to be searched for.
 *
 * Return: Always 0 (Success).
 */
char *_strpbrk(char *s, char *accept)
{
	int w;

	while (*s)
	{
		for (w = 0; accept[w]; w++)
		{
			if (*s == accept[w])
				return (s);
		}

		s++;
	}
	return (NULL);
}

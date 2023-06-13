#include "main.h"

/**
 * _strspn - starting point
 * @s: initial string segment to be searched
 * @accept: input measured prefix
 *
 * Return: the amount of data in string @s that
 * solely consists of bytes included in @accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int j = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				j++;
				break;
			}

			else if (accept[i + 1] == '\0')
				return (j);
		}

		s++;
	}

	return (j);
}

#include "main.h"
#include <stddef.h>

/**
 * _strstr - point of entry
 * @needle: searched substring
 * @haystack: searched main string
 *
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	int l;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		l = 0;

		if (haystack[l] == needle[l])
		{
			do {
				if (needle[l + 1] == '\0')
					return (haystack);

				l++;

			} while (haystack[l] == needle[l]);
		}

		haystack++;
	}

	return (NULL);
}

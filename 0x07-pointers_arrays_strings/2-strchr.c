#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @c: Character in a string to be located.
 * @s: The string in question.
 *
 * Return: Pointer to the first occurrence of the character @c in the string
 * else NULL if c is not found.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)

	{
		if (s[i] == c)

			return (s + i);
	}

	return ('\0');
}

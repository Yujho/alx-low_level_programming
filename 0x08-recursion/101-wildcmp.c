#include "main.h"

/**
 * wildcmp - compares two strings s1 and s2,
 * where s2 may contain wildcards
 * @s1: the first string
 * @s2: the second string, which may contain wildcards
 *
 * Return: 1 if s1 and s2 match and 0 if otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		return (*s2 == '\0');	/*return 1 if s2 and s1 are empty*/
	}

	if (*s2 == '*')	/*if s2 starts with *, rec check if s1 matches it*/
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);	/*otherwise, s1 and s2 don't match*/
}

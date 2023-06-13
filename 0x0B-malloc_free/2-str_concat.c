#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concates two strings
 * @s1: adss 1 to string
 * @s2: adds 2 to string
 * Return: concat of s1 and s2 and NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *k;
	int j, l;

	if (s1 == NULL)
		s1 = "";	/*function first calculates the lengths of s1 and s2*/
	if (s2 == NULL)
		s2 = "";	/*then allocates memory for the concatenated string*/

	j = l = 0;
	while (*(s1 + j) != '\0')
		j++;
	while (*(s2 + l) != '\0')
		l++;
	k = malloc(sizeof(char) * (j + l + 1));

	if (k == NULL)	/*function fails thus the NULL*/
		return ('\0');
	j = l = 0;
	while (*(s1 + j) != '\0')
	{
		k[j] = *(s1 + j);
		j++;
	}

	while (*(s2 + l) != '\0')
	{
		k[j] = s2[l];
		j++, l++;
	}
	k[j] = '\0';
	return (k);
}

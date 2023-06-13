#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Returns pointer to a new string
 * @str: initial string
 *
 * Return: pointer to the duplicated string and null for low memory
 */
char *_strdup(char *str)
{
	char *j;
	unsigned int i, l;

	i = 0;
	l = 0;

	if (str == NULL)
		return (NULL);

	while (*(str + i) != '\0')
		i++;

	j = malloc(sizeof(char) * (i + 1));

	if (j == NULL)
		return (NULL);

	for (l = 0; *(str + l); l++)
		*(j + l) = *(str + l);

	return (j);
}

#include "main.h"
#include <stdlib.h>
/**
 * argstostr - command entry
 * @ac: integer input
 * @av: double pointer array of string
 * Return: Always 0 (success)
 */
char *argstostr(int ac, char **av)
{
	int b, d, p = 0, m = 0;	/*declarations of ints*/
	char *str;

	if (ac == 0)
		return (NULL);

	if (av == NULL)
		return (NULL);	/*failure return 0 to all NULL returns*/

	for (b = 0; ac > b; b++)
	{
		for (d = 0; av[b][d]; d++)
			m++;
	}
	m += ac;

	str = malloc(sizeof(char) * m + 1);	/*declaration*/
	if (str == NULL)
		return (NULL);
	for (b = 0; ac > b; b++)
	{
	for (d = 0; av[b][d]; d++)
	{
		str[p] = av[b][d];
		p++;
	}
	if (str[p] == '\0')
	{
		str[p++] = '\n';
	}
	}
	return (str);	/*str pointer is returned after success*/
}

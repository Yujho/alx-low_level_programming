#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: range of values stored
 * @max: range of values stored and element numbers
 *
 * Return: pointer to the newly made array
 */
int *array_range(int min, int max)
{
	int *c;
	int j, k;

	if (max < min)
		return (NULL);

	k = max - min + 1;

	c = malloc(sizeof(int) * k);

	if (c == NULL)
		return (NULL);

	for (j = 0; j < (max - min + 1); j++)
		*(c + j) = min + j;

	return (c);
}

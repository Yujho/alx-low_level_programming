#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **k;
	int j, l;

	if (width <= 0 || height <= 0)
		return (NULL);

	k = malloc(sizeof(int *) * height);

	if (k == NULL)
		return (NULL);

	for (j = 0; j < height; j++)
	{
		*(k + j) = malloc(sizeof(int) * width);

		if (*(k + j) == NULL)
		{
			for (; j >= 0; j--)
				free(*(k + j));

			free(k);
			return (NULL);
		}
	}

	for (j = 0; j < height; j++)
	{
		for (l = 0; l < width; l++)
			k[j][l] = 0;
	}

	return (k);
}

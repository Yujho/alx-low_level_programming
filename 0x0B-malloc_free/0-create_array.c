#include "main.h"
#include <stdlib.h>

/**
 * create_array - of chars, and initializes it with a specific char
 * @size: of array
 * @c: char
 * Return: pointer to the array or NULL is 0 or failiure
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	array = malloc(sizeof(char) * size);

	if (size == 0 || array == NULL)
	return (NULL);	/*returns null for failure to allocate memory*/
	for (i = 0; i < size; i++)
	*(array + i) = c;
	return (array);	/*returns a pointer to the newly created array*/
}

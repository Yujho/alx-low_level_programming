#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - uses malloc and free for memory block realocation
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: ptr allocation size
 * @new_size: for new memory block
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;	/*ptr1*/
	char *c;	/*old_ptr*/
	unsigned int l;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);	/*If malloc fails it too returns NULL*/

	c = ptr;

	if (new_size < old_size)
	{
		for (l = 0; l < new_size; l++)
			*(p + l) = *(c + l);
	}

	if (old_size < new_size)
	{
		for (l = 0; old_size > l; l++)
			*(p + l) = *(c + l);
	}

	free(ptr);
	return (p);
}

#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for a struct dog
 * @d: struct dog to free
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	{
		free(d->name);
		free(d->owner);
		free(d);	/*frees memory allocated to name and owner using freefunction*/
	}
}

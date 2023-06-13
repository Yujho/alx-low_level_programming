#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer initializatin to struct dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: 0 Always success
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)	/*if NULL is returned then the code blockis executed*/
	d = malloc(sizeof(struct dog));
	{

	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}

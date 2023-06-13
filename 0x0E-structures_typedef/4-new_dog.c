#include <stdlib.h>
#include "dog.h"

/**
* new_dog - creates a new dog
* @name: of dog
* @age: of dog
* @owner: owner
*
* Return: to new dog (pointer)
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int p, q, j;
	dog_t *dog;


	if (name == NULL || owner == NULL)
		return (NULL);	/*prog halts upon NULL*/
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (p = 0; *(name + p); p++)
	;
	p++;
	dog->name = malloc(sizeof(char) * p + 1);
	if (dog->name == NULL)
	{
	free(dog);
		return (NULL);
	}
	for (j = 0; p > j; j++)
	dog->name[j] = *(name + j);
	dog->age = age;	/*float was applied inexpecting decimal outcome*/
	for (q = 0; *(owner + q); q++)
	;
	q++;
	dog->owner = malloc(sizeof(char) * q + 1);
	if (dog->owner == NULL)
	{
	free(dog->name);
	free(dog);
	return (NULL);
	}
	for (j = 0; q > j; j++)
	dog->owner[j] = *(owner + j);
	return (dog);
}

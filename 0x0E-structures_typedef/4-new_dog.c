#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - makes a new struct dog
 * @name: his/her name
 * @age: how old is he
 * @owner: who are you
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		free(d);
	d->name = name;
	d->age = age;
	d->owner = owner;
	d->name = name;
	d->owner = owner;

	return (d);
}

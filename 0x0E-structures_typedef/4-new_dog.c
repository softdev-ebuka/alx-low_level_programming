#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 *
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int x = 0, y = 0, z;
	dog_t *d;

	while (name[x] != '\0')
		x++;
	while (owner[y] != '\0')
		y++;
	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		free(d);
		return (NULL);
	}
	d->name = malloc(x * sizeof(d->name));
	if (d->name == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	for (z = 0 ; z <= x ; z++)
		d->name[z] = name[z];
	d->age = age;
	d->owner = malloc(y * sizeof(d->owner));
	if (d->owner == NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
		return (NULL);
	}
	for (z = 0 ; z <= y ; z++)
		d->owner[z] = owner[z];
	return (d);
}

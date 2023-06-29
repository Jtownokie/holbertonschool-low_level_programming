#include "dog.h"

/**
 * *new_dog - Creates a new dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 *
 * Return: New dog_t variable
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));

	if (d == NULL)
	{
		return (NULL);
	}
		d->name = name;
		d->age = age;
		d->owner = owner;
		return (d);
}

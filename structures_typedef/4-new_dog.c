#include "dog.h"
#include "strlen.c"
#include "strcpy.c"

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
	char *namecopy;
	char *ownercopy;

	d = malloc(sizeof(dog_t));

	if (d == NULL)
	{
		return (NULL);
	}

	d->name = malloc(sizeof(char) * (_strlen(name) + 1));

	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc(sizeof(char) * (_strlen(owner) + 1));

	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	d->name = _strcpy(d->name, name);
	d->age = age;
	d->owner = _strcpy(d->owner, owner);
	return (d);
}

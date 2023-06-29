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
	char *namecopy;
	char *ownercopy;

	d = malloc(sizeof(dog_t));
	namecopy = malloc(sizeof(char) * (strlen(name) + 1));
	ownercopy = malloc(sizeof(char) * (strlen(owner) + 1));

	if (d == NULL)
	{
		free(d);
		free(namecopy);
		free(ownercopy);
		return (NULL);
	}

	namecopy = name;
	ownercopy = owner;

	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}

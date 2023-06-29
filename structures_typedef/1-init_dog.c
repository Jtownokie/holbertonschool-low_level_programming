#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to address of new variable
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 *
 * Return: Always void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (*d == NULL)
	{
		printf("Ok\n");
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}

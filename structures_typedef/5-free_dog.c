#include "dog.h"

/**
 * free_dog - Frees a new dog
 * @d: Dog to free
 *
 * Return: Always Void
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}

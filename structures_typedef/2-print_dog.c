#include "dog.h"

/**
 * print_dog - Prints struct dog
 * @d: Struct to print
 *
 * Return: Always void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)\nAge: %f\nOwner: %s\n", d->age, d->owner);
		}
		else if (d->age == NULL)
		{
			printf("Name: %s\nAge: (nil)\nOwner: %s\n", d->name, d->owner);
		}
		else if (d->owner == NULL)
		{
			printf("Name: %s\nAge: %f\nOwner: (nil)\n", d->name, d->age);
		}
		else
		{
			printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
		}
	}
}

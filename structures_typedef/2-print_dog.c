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
			d->name = "(nil)";
		}
		if (d->age == 0)
		{
			d->age = 0;
		}
		if (d->owner == NULL)
		{
			d->owner = "(nil)";
		}
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}

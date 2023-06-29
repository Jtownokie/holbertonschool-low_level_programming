#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

/* Putchar Function */
int _putchar(char c);

/**
 * struct dog - New type "dog", with name, age, and owner
 * @name: Name of Dog
 * @age: Age of Dog
 * @owner: Owner of Dog
 *
 * Description: Struct named "dog" that includes the name, age, and owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif

#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

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

/* Putchar Function */
int _putchar(char c);

/* Init_Dog Function */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

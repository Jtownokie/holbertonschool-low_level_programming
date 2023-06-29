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

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/* Putchar Function */
int _putchar(char c);

/* Init_Dog Function */
void init_dog(struct dog *d, char *name, float age, char *owner);

/* Print_Dog Function */
void print_dog(struct dog *d);

/* New_Dog Function */
dog_t *new_dog(char *name, float age, char *owner);

#endif

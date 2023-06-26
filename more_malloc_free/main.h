#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

/* Putchar Function */
int _putchar(char c);

/* Strlen Function */
int _strlen(char *s);

/* Create Array Function */
char *create_array(unsigned int size, char c);

/* Strdup Function */
char *_strdup(char *str);

/* Strcat Malloc Function */
char *str_concat(char *s1, char *s2);

/* Pointer to 2D Array Function */
int **alloc_grid(int width, int height);

/* Free 2D Array Function */
void free_grid(int **grid, int height);

/* Memory Allocation Function */
void *malloc_checked(unsigned int b);

/* String_nconcat Function */
char *string_nconcat(char *s1, char *s2, unsigned int n);

/* Memory Allocation for Array Function */
void *_calloc(unsigned int nmemb, unsigned int size);

/* Min/Max Array Function */
int *array_range(int min, int max);

#endif

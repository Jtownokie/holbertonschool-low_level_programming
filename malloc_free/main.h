#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

/* Putchar Function */
int _putchar(char c);

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

#endif

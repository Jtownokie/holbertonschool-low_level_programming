#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

/* Putchar Function */
int _putchar(char c);

/* Print Name Function Pointer */
void print_name(char *name, void (*f)(char *));

/* Array Iterator Function Pointer */
void array_iterator(int *array, size_t size, void (*action)(int));

/* Integer Search Function Pointer */
int int_index(int *array, int size, int (*cmp)(int));

#endif

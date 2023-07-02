#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>

/* Putchar Function */
int _putchar(char c);

/* Sum Parameters Function */
int sum_them_all(const unsigned int n, ...);

/* Print Numbers Function */
void print_numbers(const char *separator, const unsigned int n, ...);

/* Print Strings Function */
void print_strings(const char *separator, const unsigned int n, ...);

/* Print All Function */
void print_all(const char * const format, ...);

#endif

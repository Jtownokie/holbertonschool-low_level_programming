#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/* Putchar Function */
int _putchar(char c);

/* Length of String Function */
int _strlen(char *s);

/* Print String Function */
void _puts(char *str);

/* Strcpy Function */
char *_strcpy(char *dest, char *src);

/* Convert String to Integer Function */
int _atoi(char *s);

/* Strcat Function */
char *_strcat(char *dest, char *src);

/* Strcat N Bytes Function */
char *_strncat(char *dest, char *src, int n);

/* Strcpy N Function */
char *_strncpy(char *dest, char *src, int n);

/* Strcmp Function */
int _strcmp(char *s1, char *s2);

/* Memset Function */
char *_memset(char *s, char b, unsigned int n);

/* Memcpy Function */
char *_memcpy(char *dest, char *src, unsigned int n);

/* Strchr Function */
char *_strchr(char *s, char c);

/* Strspn Function */
unsigned int _strspn(char *s, char *accept);

/* Strpbrk Function */
char *_strpbrk(char *s, char *accept);

/* Strstr Function */
char *_strstr(char *haystack, char *needle);

/* isUpper Function */
int _isupper(int c);

/* isDigit Function */
int _isdigit(int c);

/* isLower Function */
int _islower(int c);

/* isAlpha Function */
int _isalpha(int c);

/* ABS Function */
int _abs(int);

#endif

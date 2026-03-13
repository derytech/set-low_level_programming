#ifndef MAIN_H
#define MAIN_H

/* Standard library inclusion for size_t if needed */
#include <stddef.h>

/* Function prototypes */

/* 0-strcat.c */
char *_strcat(char *dest, char *src);

/* 1-strncat.c */
char *_strncat(char *dest, char *src, int n);

/* 2-strncpy.c */
char *_strncpy(char *dest, char *src, int n);

/* 3-strcmp.c */
int _strcmp(char *s1, char *s2);

/* 4-rev_array.c */
void reverse_array(int *a, int n);

/* 5-string_toupper.c */
char *string_toupper(char *);

/* 6-cap_string.c */
char *cap_string(char *);

#endif /* MAIN_H */

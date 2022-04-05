#ifndef MAIN_M_INCLUDED
#define MAIN_M_INCLUDED

#include <stdio.h>
#include <stdlib.h>

int _putchar(char);

char *create_array(unsigned int size, char c);

char *_strdup(char *str);

char **strtow(char *str);

char *argstostr(int ac, char **av);

char *str_concat(char *s1, char *s2);

void free_grid(int **grid, int height);

int **alloc_grid(int width, int height);

#endif

#ifndef _MAIN_H_
#define _MAIN_H_
#include<stdlib.h>
#include<stdio.h>
#include<stddef.h>
int _putchar(char c);
char *_strdup(char *str);
char *create_array(unsigned int size, char c);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height)
void free_grid(int **grid, int height);

#endif

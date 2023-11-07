#include<stdio.h>
#include"function_pointers.h"

/**
 * print_name - Function name
 * @name: first input
 * @f: second input
 *
 * Description: prints a name
 *
 * Return: something
 */

void print_name(char *name, void (*f)(char *))
{
f(name);
}

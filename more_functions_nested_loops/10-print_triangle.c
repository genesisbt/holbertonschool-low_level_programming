#include "main.h"
/**
 * print_triangle - excercise five variables
 * @size: first input
 *
 * Description: one to ten
 *
 * Return: does not return nothing at all
 */

void print_triangle(int size) {
int i;
int j;
int k;

    for (i = 0; i < size; i++) 
    {
        for (j = 0; j < size - i - 1; j++) 
	{
            _putchar(' ');
        }
        for (k = 0; k < i + 1; k++) 
	{
            _putchar('#');
        }
        _putchar('\n');  
    }
}

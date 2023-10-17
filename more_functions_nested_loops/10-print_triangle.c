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

    for (int i = 0; i < size; i++) 
    {
        for (int j = 0; j < size - i - 1; j++) 
	{
            putchar(' ');
        }
        for (int k = 0; k < i + 1; k++) 
	{
            putchar('#');
        }
        putchar('\n');  
    }
}

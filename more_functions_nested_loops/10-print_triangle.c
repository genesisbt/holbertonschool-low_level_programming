#include <stdio.h>
/**
 * print_triangle - excercise five variables
 * @size: first input
 *
 * Description: one to ten
 *
 * Return: does not return nothing at all
 */

void print_triangle(int size)
{
int a;
int b;
int c;

for (a = 1 ; a <= size ; a++)
	{
		for (c = 1 ; c <= size ; c++)
		{
			printf(" ");
		}
		for (b = size - 1; b > 0 ; b--)
		{
			printf("#");
		}
	printf("\n");
	}
if (size <= 0)
	printf("\n");
}

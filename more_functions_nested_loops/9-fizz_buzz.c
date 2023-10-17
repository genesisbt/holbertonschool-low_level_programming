#include "main.h"
/**
 * print_square - excercise five variables
 * @size: first input
 *
 * Description: one to ten
 *
 * Return: does not return nothing at all
 */

void print_square(void)
{
int a;

for (a = 1; a < 100; a++)
	{
	if (a % 3 == 0 && a % 5 == 0)
		printf("FizzBuzz ");
	else if (a % 5 == 0)
		printf("Buzz ");
	else if (a % 3 == 0)
		printf("Fizz ");
	else
		printf("%d ", a)
	}
printf("\n");
}

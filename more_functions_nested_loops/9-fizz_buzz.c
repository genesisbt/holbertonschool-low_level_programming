#include <stdio.h>
/**
 * main - excercise five variables
 *
 * Description: one to ten
 *
 * Return: does not return nothing at all
 */

int main(void)
{
int a;

for (a = 1; a <= 100; a++)
	{
	if (a % 3 == 0 && a % 5 == 0)
		if (a == 100)
			printf ("FizzBuzz");
		else
			printf("FizzBuzz ");
	else if (a % 5 == 0)
		printf("Buzz ");
	else if (a % 3 == 0)
		printf("Fizz ");
	else
		printf("%d ", a);
	}
printf("\n");
return (0);
}

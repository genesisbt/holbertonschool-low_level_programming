#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - excercise positive or negative
 *
 * Description: variable n is positive or negative.
 *
 * Return: does not return nothing at all
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}

#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - excercise ten
 * @n: int
 *
 * Description: functions nested loops
 *
 * Return: does not return nothing at all
 */

int print_to_98(int n)
{
printf("%d", n);
if (n < 98)
{
	for (; n < 98 ; n++)
	{
		printf("%d, ", n);
	}
}
if (n > 98)
{
	for (; n > 98 ; n--)
	{
		printf("%d, ", n);
	}
}
printf("%d/n", n);
return (0);
}

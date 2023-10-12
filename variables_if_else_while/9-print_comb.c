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
	int num;
	int num2;

	for (num = 0; num <= 9; num++)
	{
		for (num2 = 0; num2 <=9 ; num2++)
		{
			putchar(num);
			putchar(num2);
			putchar(',');
			putchar(' ');
		}
	}
return (0);
}

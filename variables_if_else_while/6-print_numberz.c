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

	for (num = 0; num <= 9; num++)
	{	
		char numchar = num + '0';
		putchar(numchar);
	}

putchar('\n');
return (0);
}

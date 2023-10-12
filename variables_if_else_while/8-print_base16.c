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
	char letra;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
	}
	for (letra = 'a'; letra <= 'f' ; letra++)
	{
		putchar(letra);
	}
putchar('\n');
return (0);
}

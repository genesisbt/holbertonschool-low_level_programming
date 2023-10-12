#include <stdio.h>
/**
 * main - excercise
 *
 * Description: Using puts
 *
 * Return: does not return nothing at all
 */

int main(void)
{
	char letra;

	for (letra = 'a' ; letra <= 'z'; letra++)
	{
		putchar(letra);
	}
	for (letra = 'A' ; letra <= 'Z'; letra++)
	{
		putchar(letra);
	}
putchar('\n');
return (0);
}

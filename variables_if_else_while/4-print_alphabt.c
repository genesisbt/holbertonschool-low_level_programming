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
	if (letra != 'q' || letra != 'e')
		putchar (letra);
	}
putchar('\n');
return (0);
}

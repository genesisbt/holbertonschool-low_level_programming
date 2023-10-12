#include "main.h"
/**
 * main - excercise one
 *
 * Description: functions nested loops
 *
 * Return: does not return nothing at all
 */

int print_alphabet(void)
{
	char letra;

	for (letra = 'z' ; letra >= 'a'; letra--)
	{
		_putchar (letra);
	}
putchar('\n');
return (0);
}

#include "main.h"
/**
 * print_alphabet_x10 - excercise two
 *
 * Description: functions nested loops
 *
 * Return: does not return nothing at all
 */

int print_alphabet_x10(void)
{
	char letra;
	int num;

	for (num = 0 ; num < 10 ; num++)
	{
	for (letra = 'a' ; letra <= 'z'; letra++)
	{
		_putchar (letra);
	}
	_putchar('\n');
	}
return (0);
}

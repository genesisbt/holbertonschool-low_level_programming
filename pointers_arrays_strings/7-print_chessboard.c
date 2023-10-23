#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - excercise name
 * @a: entry one
 *
 * Description: pointers arrays strings
 *
 * Return: lenght of string
 */

void print_chessboard(char (*a)[8])
{
	int contador = 0;
	int contador2 = 0;

	for (contador = 0 ; contador < 8 ; contador++)
	{
		for (contador2 = 0 ; contador2 < 8 ; contador2++)
		{
			_putchar a[contador][contador2];
		}

	}
return (NULL);
}

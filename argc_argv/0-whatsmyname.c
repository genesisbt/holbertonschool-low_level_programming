#include "main.h"
#include <stdio.h>

/**
 * mynameis - Name of the script
 * @argc: entry one
 * @argv: entry two
 *
 * Description: Prints the first argument of the command line in the terminal
 *
 * Return: is void
 */

void mynameis(int argc, char *argv[])
{
	printf("%c", argv[0]);
}

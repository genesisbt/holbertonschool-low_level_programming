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

void mynameis(char *argv[])
{
	printf("%s\n", argv[0]);
}

int main(int argc, char *argv[])
{
	(void)argc;
	mynameis(argv);
	return (0);
}


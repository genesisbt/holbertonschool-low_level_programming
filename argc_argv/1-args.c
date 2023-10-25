#include "main.h"
#include <stdio.h>

/**
 * argcount - Name of the script
 * @argc: entry one
 *
 * Description: Prints the first argument of the command line in the terminal
 *
 * Return: is void
 */

void argcount(int a)
{	
	a--;
	printf("%i\n", a);
}

/**
 * main - name
 * @argc: entry one
 * @argv: entry two
 *
 * Description: Main function
 *
 * Return: Zero
 */

int main(int argc, char *argv[])
{
	(void)argv;
	argcount(argc);
	return (0);
}


#include "main.h"
#include <stdio.h>

/**
 * argprint - Name of the script
 * @argc: entry one
 * @argv: entry two
 *
 * Description: Prints the first argument of the command line in the terminal
 *
 * Return: is void
 */

void argprint(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
	printf("%s\n", argv[i]);
	}
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
	argprint(argc, argv);
	return (0);
}


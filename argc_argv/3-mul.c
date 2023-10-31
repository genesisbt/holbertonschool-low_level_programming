#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * multiply - Name of the script
 * @argv: entry two
 * @argc: entry three
 *
 * Description: Prints the first argument of the command line in the terminal
 *
 * Return: is void
 */

int multiply(int argc, char *argv[])
{
int result;
int n1 = atoi(argv[1]);
int n2 = atoi(argv[2]);

result = n1 * n2;
printf("%i\n", result);
return (0);
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
	if (argc == 3)
	{
	multiply(argc, argv);
	return (0);
	}
	else
	{
	printf("Error\n");
	return (1);
	}
}


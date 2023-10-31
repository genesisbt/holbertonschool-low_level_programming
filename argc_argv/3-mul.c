#include "main.h"
#include <stdio.h>

/**
 * multiply - Name of the script
 * @n1: entry one
 * @n2: entry two
 * @argc: entry three
 *
 * Description: Prints the first argument of the command line in the terminal
 *
 * Return: is void
 */

int multiply(int n1, int n2, int argc)
{
int result;
if (argc == 3)
	{
	result = n1 * n2;
	printf("%i\n", result);
	}
else
	{
	printf("Error");
	return (1);
	}
}

/**
 * main - name
 * @argc: entry one
 * @n1: entry two
 * @n2: entry three
 *
 * Description: Main function
 *
 * Return: Zero
 */

int main(int n1, int n2, int argc)
{
	multiply(n1, n2, argc);
	return (0);
}


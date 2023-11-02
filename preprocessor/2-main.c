#include "main.h"
#include <stdio.h>

/**
 * main - Name of the script
 * @argc: entry one
 * @argv: entry two
 *
 * Description: Prints the first argument of the command line in the terminal
 *
 * Return: is void
 */

int main(int argc, char *argv[])
{
int a;

for (a = 0 ; argv[0][a] != '\0' ; a++)
{
	_putchar(argv[0][a]);
}
_putchar('\n');
return (0);
}

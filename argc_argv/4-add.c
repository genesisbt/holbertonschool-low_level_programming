#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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
	int c;
	int c2;
	int result = 0;

	if (argc > 1)
	{
		for (c = 1 ; c < argc ; c++)
		{
			for (c2 = 0 ; argv[c][c2] != '\0' ; c2++)
			{
			if (argv[c][c2] < '0' || argv[c][c2] > '9')
			{
				printf("Error\n");
				return (1);
			}
			}
				result += atoi(argv[c]);
		}
		printf("%i\n", result);
		return (0);
	}
	else
	{
		printf("0\n");
		return (0);
	}
}

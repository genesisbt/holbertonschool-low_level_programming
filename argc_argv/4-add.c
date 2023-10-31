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
	int result = 0;

	if (argc > 1)
	{
		for (c = 1 ; c < argc ; c++)
		{
			if (argv[c] < 0 || argv[c] > 9)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				result += atoi(argv[c]);
			}
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

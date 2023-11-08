#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include"3-calc.h"

/**
 * main - function name
 * @argc: one
 * @argv: two
 *
 * Description: something
 *
 * Return: something
 */

int main(int argc, char *argv[])
{
int a, b, result;

if (argc != 4)
{
	printf("Error\n");
	exit(98);
}

if ((argv[2][0] == '/' || argv[2][0] == '%') && atoi(argv[3]) == 0)
{
	printf("Error\n");
	exit(100);
}
if ((argv[2][0] == '+' || argv[2][0] == '-' || argv[2][0] == '/'
	|| argv[2][0] == '%' || argv[2][0] == '*' || argv[2][0] == '/')
	&& strlen(argv[2]) == 1)
{
a = atoi(argv[1]);
b = atoi(argv[3]);
result = get_op_func(argv[2])(a, b);
printf("%i\n", result);
}
else
{
	printf("Error\n");
	exit(99);
}
return (0);
}

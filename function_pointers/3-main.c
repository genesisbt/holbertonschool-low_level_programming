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
(void)argc;
int a, b, result;

a = atoi(argv[1]);
b = atoi(argv[3]);
result = get_op_func(argv[2])(a, b);

printf("%i\n", result);
return (0);
}

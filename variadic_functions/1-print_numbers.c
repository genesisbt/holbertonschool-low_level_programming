#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - function name
 * @separator: separator of parameters
 * @n: number of parameters
 *
 * Description: function sum of all parameters passed
 *
 * Return: result of sum
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list lista;
unsigned int i;
int res = 0;

va_start(lista, n);
for (i = 0 ; i < n ; i++)
{
	if (i < n - 1)
		printf("%i%s", va_arg(lista, int), separator);
	else
		printf("%i", va_arg(lista, int));
}
putchar('\n');
va_end(lista);

}

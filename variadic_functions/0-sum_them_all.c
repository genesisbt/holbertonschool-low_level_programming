#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function name
 * @n: number of parameters
 *
 * Description: function sum of all parameters passed
 *
 * Return: result of sum
 */

int sum_them_all(const unsigned int n, ...)
{
if (n == 0)
	return (0);

va_list lista;
unsigned int i;
int res = 0;

va_start(lista, n);
for (i = 0 ; i < n ; i++)
{
	res += va_arg(lista, int);
}
va_end(lista);
return (res);
}

#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - function name
 * @separator: separator of parameters
 * @n: number of parameters
 *
 * Description: function sum of all parameters passed
 *
 * Return: result of sum
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list lista;
unsigned int i;
char *string;

va_start(lista, n);
for (i = 0 ; i < n ; i++)
{
	string = (va_arg(lista, char *));
	if (separator == NULL)
	{
		printf("%s", (string == NULL) ? "(nil)" : string);
	}
	else if (i < n - 1)
		printf("%s%s", (string == NULL) ? "(nil)" : string, separator);
	else
		printf("%s", (string == NULL) ? "(nil)" : string);
}
putchar('\n');
va_end(lista);

}
